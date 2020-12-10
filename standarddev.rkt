#lang scheme

;; main function used to calculate the standard deviation
(define (standard-deviation mylist)
    (expt (/ (sum-square-of-diff mylist) (count-list mylist)) 0.5)
)

;; calculate the sum of the square of the differences (with average)
(define (sum-square-of-diff mylist)
    (sum (map square (diff mylist (average mylist))))
)

;; calculate and return a list of the differences between each value and their average
(define (diff mylist average)
    (if (null? mylist)
        '()
        (cons (- (car mylist) average) (diff (cdr mylist) average))
    )
)

;; calculate how many items are in list
(define (count-list mylist)
    (if (null? (cdr mylist))
        1
        (+ 1 (count-list (cdr mylist))
        )
    )
)

// calculate the sum
(define (sum mylist)
    (if (null? (cdr mylist))
        (car mylist)
        (+ (car mylist) (sum (cdr mylist))
        )
    )
)

;; calculate the average
(define (average mylist)
    (/ (sum mylist) (count-list mylist))
)

