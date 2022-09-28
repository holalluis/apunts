package main
import "fmt"
import "strings"

func main(){
  //1. array de strings
  var medalles = []string{
    "ferro",
    "bronze",
    "plata",
    "or",
    "platí",
    "diamant",
  };
  for _,m := range medalles{ fmt.Println(m); }

  //join array
  fmt.Println(strings.Join(medalles,"/"));

  //2. array de floats
  var floats = []float64{ 1.1, 2.2, 3.3, };
  for _,f := range floats{ fmt.Println(f); }
}
