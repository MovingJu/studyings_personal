fn main(){
    // python의 lambda와 비슷함.

    // 1. 클로저 "|x| x+1"를 변수 add_one에 할당해서 함수처럼 사용가능
    let add_one = |x:i32| x+1;
    println!("{}",add_one(2)); //3

    // 2. 함수와 달리 파라미터의 타입지정 안해도 됨. 자동 추정
    let add_one = |x| x+1;
    println!("{}",add_one(2)); //3

    // 3. 파라미터가 없어도 된다. 
    let print_hello = || println!("hello");
    print_hello(); //hello

    // 4. 바디는 {}로 감쌀 수 있다. 파라미터를 여러개 사용 가능
    let divmod = |x:i32, y:i32| { 
        let q = x / y;   let r = x % y; 
        return (q,r);
    };
    println!("{:?}",divmod(10,3)); //(3,1)

}