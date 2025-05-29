fn main() {
    let mut sum = 0;
    let mut i = 1;

    while i <= 100 {
        sum += i;   
        i += i ;
    } 
    println!("sum: {}", sum);
}