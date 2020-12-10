
(define (dis x1 y1 x2 y2)
    (sqrt
        (+
            (* (- x2 x1) (- x2 x1))
            (* (- y2 y1) (- y2 y1))
        )
    )
)

(display (dis 5 6 2 2))

(exit)