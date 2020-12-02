; CLOJURE INTRO
; =============

; definir x = 5
(def x 5)

; print accepta infinits arguments
(println "hola")
(println "x value is:" x)

; FUNCIONS

; crear funció suma
(defn sum [x y] (+ x y))

; crear funció multiplicar
(defn mul [x y] (* x y))

; cridar funcions
(println
  "5+5 ="
  (sum 5 5)
  "\n5+(4+4) ="
  (sum 5 (sum 4 4))
  "\n5*(4+4) ="
  (mul 5 (sum 4 4))
)

; printf ints
(println (format "this is an integer %d" 42))

; printf floats
(def aLong 15.123)
(println (format "this is a long %.5f"  aLong))

; printf strings
(def aString "hello")
(println (format "this is a string %s" aString))
