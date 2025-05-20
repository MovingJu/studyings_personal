
fn main(){
    
    // let x: i32 = 1;
    // match x {
    //     1 => println!("one"),
    //     2 => println!("two"),
    //     3 => println!("three"),
    //     _ => println!("none of these")
    // };

    // let age: u32 = 30;
    // let group = match age {
    //     0..=10 => "baby",
    //     11..=20 => "teen",
    //     21..=60 => "adult",
    //     _ => "teulddak"
    // };

    // println!("{}", group);

    let c = '5';
    let mut num = match c.to_digit(10) {
        Some(n) => n,
        None => 0
    };
    println!("{}", num);

    // let n: u32 = 33;
    // match (n%3, n%5) {
    //     (0, 0) => println!("multiple of 15"),
    //     (0, _) => println!("multiple of 3"),
    //     (_, 0) => println!("multiple of 5"),
    //     (_, _) => println!("None of those")
    // };

    let c = '6';
    if let Some(num) = c.to_digit(10) {
        println!("num = {}", num);
    }else{
        println!("You can't");
    }

}