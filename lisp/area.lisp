(defconstant PI 3.141592)
(defun area-circle(radi)
  (terpri)
  (format t "Radi: ~5f" radi)
  (format t "~%Area: ~10f" (* PI radi radi))
)

(area-circle 10)
