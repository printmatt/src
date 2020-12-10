#lang scheme
;; define one or more expressions that can be used to
;; count the number of items on a list without using 
;; the length operator

;; insert work below

;; using recursion to calculate length of a list
;; keep adding 1 for every head value of a sub list until it reaches null
(define (count-list mylist)
        (if (null? (cdr mylist))
            1
            (+ 1 (count-list (cdr mylist))
            )
        )
    )

;; insert work above

(print (count-list '(3 14 15 9 62 64 37)))