fn print_type_of<T>(_: &T){
  println!("{}", std::any::type_name::<T>());
}

fn main() {
  let range = 1..=10;
  print_type_of(&range);

  for i in range {
    println!("{i}");
  }
}
