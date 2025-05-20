fn main(){
    let mut sum: u32 = 0;
    for i in 1..=100{
        sum += i;
    }
    // == for i in 1..101{ ~~ }
    println!("{}", sum);

    for _ in 1..=100{
        println!("uhaha");
        break;
    }

    let a: Vec<i32> = vec![2,4,6,8,10,12,14,16,18];
    let mut sum = 0;
    for i in a {
        if sum > 50 { break; }
        sum += i;
    }
    println!("{}", sum);

    let mut v:Vec<(i32,i32)> = Vec::new();
    'label_i: for i in 2..=10{       
        for j in 2..=10{
            if j >= 5 {break 'label_i;}
            v.push((i,j)); 
        }
    }
    println!("{:?}",v); //[(2, 2), (2, 3), (2, 4)]

    

}