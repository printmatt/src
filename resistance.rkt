#lang scheme

;; main function to convert a list of colors and calculate the resistance
(define (resistance mycolors)
    (calculate-res (map convert mycolors))
)

;; calculate the resistance using a list of values
(define (calculate-res colors)
    (* (base colors) (multiplier colors))    
)

;; calculate the base using the first 3 values
(define (base colors-list)
    (if (null? (cdr colors-list))
        '0
        (+ (* 100 (car colors-list)) (/ (base (cdr colors-list)) 10))
    )
)

;; get the multiplier value via the last value
(define (multiplier colors-list)
    (if (null? (cdr colors-list))
        (expt 10 (car colors-list))
        (+ 0 (multiplier (cdr colors-list)))
    )
)

;; convert a color to the respective value
(define (convert color)
    (cond 
        ((eq? color 'black) 0)
        ((eq? color 'brown) 1)
        ((eq? color 'red) 2)
        ((eq? color 'orange) 3)
        ((eq? color 'yellow) 4)
        ((eq? color 'green) 5)
        ((eq? color 'blue) 6)
        ((eq? color 'violet) 7)
        ((eq? color 'grey) 8)
        ((eq? color 'white) 9)
    )
)