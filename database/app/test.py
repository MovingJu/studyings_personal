import asyncio
import aiomysql

async def main():

    conn = await aiomysql.connect(
        host='localhost',
        port=3306,
        user='root',
        password='yourpassword',
        db='yourdb',
        autocommit=True
    )

    async with conn.cursor(aiomysql.DictCursor) as cur:
        # 테이블 생성
        await cur.execute("""
            CREATE TABLE IF NOT EXISTS users (
                id INT AUTO_INCREMENT PRIMARY KEY,
                name VARCHAR(100),
                age INT
            )
        """)

        # 데이터 삽입
        await cur.execute("INSERT INTO users (name, age) VALUES (%s, %s)", ("Alice", 30))

        # 다중 삽입
        users = [("Bob", 25), ("Charlie", 28)]
        await cur.executemany("INSERT INTO users (name, age) VALUES (%s, %s)", users)

        # 조회
        await cur.execute("SELECT * FROM users")
        rows = await cur.fetchall()
        print(rows)

    conn.close()

asyncio.run(main())
