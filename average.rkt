#lang scheme
;; define one or more expressions that can be used to
;; computer the average of a list

;; insert work below

;; main function to calculate the average
(define (average mylist)
    (/ (sum mylist) (count-list mylist))
)

;; count number of items in list
(define (count-list mylist)
    (if (null? (cdr mylist))
        1
        (+ 1 (count-list (cdr mylist))
        )
    )
)

;; sum up all values in list
(define (sum mylist)
    (if (null? (cdr mylist))
        (car mylist)
        (+ (car mylist) (sum (cdr mylist))
        )
    )
)

(define (compare x y z)
    (if (< x y)
        (if (< x z)
            (list y z)
            (list y x))
        (if (< y z)
            (list x z)
            (list x y))
    )
)

;; insert work above

(print (average '(3 14 15 9 62 64 37)))