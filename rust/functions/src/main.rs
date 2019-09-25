fn main() {
  println!("Hello, world!");
  another_fn( 50,  60);
  another_fn(342, 123);
}

fn another_fn(x:i32, y:i32){
  println!("el valor de x es {}",x);
  println!("el valor de y es {}",y);
}
