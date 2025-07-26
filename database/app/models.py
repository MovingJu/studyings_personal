from sqlalchemy.ext.asyncio import create_async_engine, async_sessionmaker
from sqlalchemy.orm import DeclarativeBase, Mapped, mapped_column
from sqlalchemy import String

from dotenv import load_dotenv
import os

load_dotenv()

DB_USER = os.getenv("DB_USER")     # "root"
DB_PW = os.getenv("DB_PW")         # "1234"
DB_HOST = os.getenv("DB_HOST")     # "IP"
DB_PORT = os.getenv("DB_PORT")     # "3306"
DB_NAME = os.getenv("DB_NAME")     # "mydb"

# 비동기 MySQL 연결 URL (aiomysql 사용)
DATABASE_URL = f"mysql+aiomysql://{DB_USER}:{DB_PW}@{DB_HOST}:{DB_PORT}/{DB_NAME}"

# 비동기 엔진 및 세션
engine = create_async_engine(DATABASE_URL, echo=False)
async_session = async_sessionmaker(engine, expire_on_commit=False)

# DB 세션 의존성
async def get_db():
    async with async_session() as session:
        yield session

# Base 클래스
class Base(DeclarativeBase):
    pass

# 예제 모델
class User(Base):
    __tablename__ = "users"

    id: Mapped[int] = mapped_column(primary_key=True)
    name: Mapped[str] = mapped_column(String(50))
