
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

