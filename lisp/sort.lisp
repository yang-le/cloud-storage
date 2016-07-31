(defun my-insert (obj lst)
  (if (null lst)
      (cons obj lst)
      (if (< obj (car lst))
          (cons obj lst)
          (cons (car lst) (my-insert obj (cdr lst))))))


(defun my-sort (lst)
  (if (null lst)
      lst
      (my-insert (car lst) (my-sort (cdr lst)))))

(defun my-merge (lst1 lst2)
  (if (null lst1)
      lst2
      (if (null lst2)
          lst1
          (if (< (car lst1) (car lst2))
              (cons (car lst1) (my-merge (cdr lst1) lst2))
              (cons (car lst2) (my-merge (cdr lst2) lst1))))))

(defun my-len (lst)
  (if (null lst)
      0
      (+ 1 (my-len (cdr lst)))))

(defun my-cdr (lst n)
  (if (= 0 n)
      lst
      (cdr (my-cdr lst (- n 1)))))

(defun my-sublist (lst start len)
  (if (= 0 len)
      ()
      (cons (car (my-cdr lst start)) (my-sublist lst (+ start 1) (- len 1)))))

(defun my-qsort (lst)
  (if (null lst)
      lst
      (if (null (cdr lst))
          lst
          (let ((len (my-len lst)) (half-len (floor (/ (my-len lst) 2))))
            (my-merge
             (my-qsort (my-sublist lst 0 half-len))
             (my-qsort (my-sublist lst half-len (- len half-len))))))))
