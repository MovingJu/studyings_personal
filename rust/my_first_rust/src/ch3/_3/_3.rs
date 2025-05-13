fn main(){
    let d : i32 = "2".parse().expect("not a number");

    let d = "2".parse::<i32>().expect("not a number");
    
    println!("{}", d);


    // .parse() 의 리턴타입은 result이다. 따라서, 0k 혹은 err의 경우로 나눠서 리턴값을 처리해야하고, 이런 경우 err의 경우만 리턴하게 하는 expect를 사용하면 편하다.
    
}