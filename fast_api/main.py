from fastapi import FastAPI
from pydantic import BaseModel



APP = FastAPI()

@APP.get("/")
def index():
    return {"message": "This is home."}

@APP.get("/hello/{name}")
def hello(name: str):
    return {"message": f"hello, {name}. ntmy."}

class Introduce(BaseModel):
    name: str | None = None
    age: int | None = None

@APP.post("/introduce/")
def introduce(item: Introduce):
    return {"message": f"hello, this is {item.age}, {item.name}"}

@APP.get("/search/")
def search(keyword: str = ""):
    return {"message": f"당신이 검색한 키워드는 '{keyword}'입니다."}    