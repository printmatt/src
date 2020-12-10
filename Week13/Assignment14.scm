(define (standard-deviation mylist)
    (expt (/ (sum-square-of-diff mylist) (count-list mylist)) 0.5)
)


(define (sum-square-of-diff mylist)
    (sum (map square (diff mylist (average mylist))))
)

(define (diff mylist average)
    (if (null? mylist)
        '()
        (cons (- (car mylist) average) (diff (cdr mylist) average))
    )
)


(define (count-list mylist)
    (if (null? (cdr mylist))
        1
        (+ 1 (count-list (cdr mylist))
        )
    )
)


(define (sum mylist)
    (if (null? (cdr mylist))
        (car mylist)
        (+ (car mylist) (sum (cdr mylist))
        )
    )
)

(define (average mylist)
    (/ (sum mylist) (count-list mylist))
)

