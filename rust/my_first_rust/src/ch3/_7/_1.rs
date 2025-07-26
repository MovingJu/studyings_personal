fn main(){
    ex3();   
}

fn ex3(){
    let v = vec![1,2,3];
    // println!("{}", v[3]);
    println!("{:?}", v.get(3));

    if let Some(n) = v.get(1) {
        println!("v's element : {}", n);
    }
    for i in &v {
        println!("{}", *i);
    }
}


fn ex2(){
    // let v: Vec<Vec<i32>> = vec![vec![1;5];5];
    // println!("{:?}", v);

    let mut v = vec![1,2,3];
    let v1 = vec![4,5,6];
    v.extend(v1);
    v.extend([7,8,9]);
    println!("{:?}", v);
}

fn ex1(){

    let mut v1: Vec<i32> = Vec::new();
    v1.push(1);
    v1.push(2);
    println!("{:?}", v1);

}
