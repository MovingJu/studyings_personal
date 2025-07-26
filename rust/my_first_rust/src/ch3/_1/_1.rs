use std::env;

fn main(){
    // let args: Vec<String> = env::args().collect();

    // let src_file = &args[1];
    // let tgt_file = &args[2];

    // println!("Source File : {src_file}");
    // println!("Target File : {tgt_file}");

    let sum = 100;
    println!("{sum}");
    println!("{}", sum);

    let v = vec![1,2,3];
    println!("{:?}", v);
}