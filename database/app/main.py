from fastapi import FastAPI, Depends
from sqlalchemy.ext.asyncio import AsyncSession
from sqlalchemy import select

from app.models import engine, Base, User, get_db

app = FastAPI()

# 앱 시작 시 테이블 생성
@app.on_event("startup") # type: ignore
async def on_startup():
    async with engine.begin() as conn:
        await conn.run_sync(Base.metadata.create_all)

@app.post("/users/")
async def create_user(name: str, db: AsyncSession = Depends(get_db)):
    user = User(name=name)
    db.add(user)
    await db.commit()
    await db.refresh(user)
    return user

@app.get("/users/")
async def get_users(db: AsyncSession = Depends(get_db)):
    result = await db.execute(select(User))
    users = result.scalars().all()
    return users
