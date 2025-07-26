# db_utils.py
import os
import aiomysql
from dotenv import load_dotenv

load_dotenv()

DB_CONFIG = {
    "host": os.getenv("DB_HOST"),
    "user": os.getenv("DB_USER"),
    "password": os.getenv("DB_PW"),
    "db": os.getenv("DB_NAME"),
    "port": 3306,
    "charset": "utf8mb4",
    "autocommit": True,
}


async def execute_many(query: str, data: list[tuple]):
    """INSERT/UPDATE/DELETE 여러 행 실행용"""
    try:
        conn = await aiomysql.connect(**DB_CONFIG)
        async with conn.cursor() as cur:
            await cur.executemany(query, data)
            print(f"{cur.rowcount} rows affected.")
        conn.close()
    except aiomysql.MySQLError as e:
        print("DB 오류:", e)


async def execute_one(query: str, params: tuple = ()):
    """SELECT 단일 쿼리 실행"""
    result = None
    try:
        conn = await aiomysql.connect(**DB_CONFIG)
        async with conn.cursor(aiomysql.DictCursor) as cur:
            await cur.execute(query, params)
            result = await cur.fetchone()
        conn.close()
    except aiomysql.MySQLError as e:
        print("DB 오류:", e)
    return result


async def execute_all(query: str, params: tuple = ()):
    """SELECT 다중 결과 반환"""
    result = []
    try:
        conn = await aiomysql.connect(**DB_CONFIG)
        async with conn.cursor(aiomysql.DictCursor) as cur:
            await cur.execute(query, params)
            result = await cur.fetchall()
        conn.close()
    except aiomysql.MySQLError as e:
        print("DB 오류:", e)
    return result
