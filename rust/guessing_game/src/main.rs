use std::io;
use rand::Rng;
use std::cmp::Ordering;

fn main() {
  println!("=== Endevina el numero ===");

  let secret_number = rand::thread_rng().gen_range(1, 101);
  //println!("El número secret és {}", secret_number);

  loop {
    println!(">> Escriu un número: ");

    let mut guess = String::new();

    io::stdin().read_line(&mut guess)
      .expect("Failed to read line");

    let guess: u32 = match guess.trim().parse() {
      Ok(num) => num,
      Err(_)  => continue,
    };

    //println!("Has escrit '{}'", guess);

    match guess.cmp(&secret_number){
      Ordering::Less    => println!(">> Massa petit!"),
      Ordering::Greater => println!(">> Massa gran!"),
      Ordering::Equal   => {
        println!(">> CORRECTE!");
        break;
      }
    }
  }
}
