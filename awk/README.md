# awk syntax

awk '(condition){action};(condition){action}' file

cat file | awk '(condition){action};(condition){action}'

## exemples

imprimeix la linia 3, si no, imprimeix el numero de linia i la tercera columna

```bash
cat arxiu.csv | awk NR==3{print};(NR!=3){print NR, $3}
```
