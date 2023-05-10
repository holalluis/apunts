use rand::Rng;
use std::cmp::Ordering;
use std::io;

fn main() {
  println!("=== Endevina un numero de l'1 al 100 ===");

  //genera un número aleatori
  let secret_number = rand::thread_rng().gen_range(1, 101);
  //println!("El número secret és {}", secret_number);

  loop {
    println!(">> Escriu un número: ");

    //nou string per guardar resposta usuari
    let mut guess = String::new();

    //llegeix stdin i guarda resultat a "guess"
    io::stdin()
      .read_line(&mut guess)
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
        println!(">> CORRECTE! El número secret era el {secret_number}");
        break;
      }
    }
  }
}
