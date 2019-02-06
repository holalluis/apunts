
(print "hola lisp")
(print (eq 3 3))
(print (eq 1 2))
(defvar *age* 18)
(print (+ *age* 2))
(if (= *age* 18)
	(print "tens 18 anys")
	(print "no tens 18 anys")
)

;--------------------------------------
(terpri) ;comment: espai en blanc
(setf *age* (* 5 2))
(print *age*)

;--------------------------------------
(loop for x in '(a b c d) do
	(print x)
)

;--------------------------------------
(defun hello()
	(print "hello")
	(terpri)
	(terpri)
)
(hello)
(hello)
