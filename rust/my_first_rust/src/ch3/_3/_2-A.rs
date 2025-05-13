fn main(){
    // tuple 이나 list같은 복합 타입은 출력할 때 {:?} 을 사용해야 한다!

    let p: (&str, u32) = ("Lee", 20);
    println!("name: {}, age: {}", p.0, p.1);
    println!("{:?}", p);

    let info: (i32, f64) = get_info();
    println!("age: {}, height: {}", info.0, info.1);
    
}

fn get_info() -> (i32, f64){
    let age: i32 = 20;
    let height: f64 = 60.5;

    return (age, height);
}