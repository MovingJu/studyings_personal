fn main(){
    let a1 : u32 = 100_000;
    let a2 : u32 = 100000;
    println!("{} {}", a1, a2);

    let b1 = 0xff;
    let b2 = 15*16 + 15;
    println!("{} {}", b1, b2);

    let c1 = 0o77;
    let d1 = 0b1111_0000;
    println!("{} {}", c1, d1);

    let e1 : u32 = b'A'.into(); // type 외우기 귀찮다. -> u32나 i32로 통일해서 쓸것.
    let e2 : char = 'A';
    println!("{} {}", e1, e2)
}