package main
import(
  "fmt"
)

func ftoc(f float64) float64{
  return (f-32)*5/9;
}

func main(){
  const freezingF float64 = 32.0;
  const boilingF  float64 = 212.0;
  fmt.Printf("%gºF\t=\t%gºC\n", freezingF, ftoc(freezingF));
  fmt.Printf("%gºF\t=\t%gºC\n", boilingF,  ftoc(boilingF));
}
