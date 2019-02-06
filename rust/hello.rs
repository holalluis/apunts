// This is a comment, and will be ignored by the compiler

// This is the main function
fn main() {
  // The statements here will be executed when the compiled binary is called

  // Print text to the console
  println!("Hello World!");

  //proves amb comentaris interns
  let x = 5 + /* 90 + */ 5;
  println!("Is `x` 10 or 100? x = {}", x);

  //println proves amb arguments
  println!("{0}, this is {1}. {1}, this is {0}", "Alice", "Bob");

  //proves amb keyword 'mut' (mutable)
  let mut num = 10;
  println!("num val {}",num);
  num = 11; //sense 'mut' dóna error
  println!("num val {}",num);
}
