fn main(){
    let p: u32 = max_factor(10);
    println!("{}", p);
}

fn max_factor(mut n: u32) -> u32 {
    let mut p = 2;
    loop {
        let (q, r) = (n/p, n%p);

        if q == 1 { break; }

        if r == 0 { n = q; }
        else { p += 1; }
    }
    return n;
}