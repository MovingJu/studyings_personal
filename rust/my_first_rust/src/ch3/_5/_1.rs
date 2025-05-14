fn add(num1: i32, num2: i32) -> i32 {
    return num1 + num2;
}

fn sub(num1: i32, num2: i32) -> i32 {
    num1 - num2 // expression에 의한 함수값 리턴.
}

fn main(){
    let mut num: i32 = add(3, 5);
    println!("{}", num);
    num = sub(5, 3);
    println!("{}", num);

    let statement: i32 = {
        if num < 5 {num} else {num + 1}
    };
    println!("{}", statement);
}
