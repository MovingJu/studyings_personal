struct Point {
    x: i32, y: i32
}

impl Point {
    fn new(x: i32, y: i32) -> Point{
        return Point {x:x, y:y};
    }

    fn distance(&self, p:&Point) -> f64{
        return (((p.x-self.x).pow(2) + (p.y-self.y).pow(2)) as f64).sqrt();
    }
}

fn main(){
    let p1: Point = Point::new(0, 0);
    let p2: Point = Point::new(3, 4);
    println!("{}", p1.distance(&p2));
}