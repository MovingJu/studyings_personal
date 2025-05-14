fn main(){
    // 1. 전형적인 if~else 표현식
    let n = 5;
    if n > 5 {
        println!("larger than 5");
    }else {
        println!("less than 5");
    }

    //2. 한줄에 표현
    if n > 5 { println!("larger than 5");}
    else { println!("less than 5");}

    //3. 에러
    //if n { println! ("do something"); }

    //4. if가 조건식(expression)임을 이용
    let c = if n > 5 { n+1 } else { n-1 };
    println!("c={}",c); // 4

    println!("{}", {
            let n = 6;

            if n % 4 == 0 {
                 "n is divisible by 4"
            } else if n % 3 == 0 {
                 "n is divisible by 3"  //이게 출력된다. 
            } else if n % 2 == 0 {
                 "n is divisible by 2"
            } else {
                 "n is not divisible by 4, 3, or 2"
            }
        }
    );
}
