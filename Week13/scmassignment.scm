2.2.1
a. (+ -8.7 (* 1.2 (- 2 1/3)))
b. (/ (+ 2/3 4/9) (- 5/11 4/3))
c. (+ 1 (/ 1 (+ 2 (/ 1 (+ 1 1/2)))))
d. (* 1 -2 3 -4 5 -6 7)

2.2.3
a. (car . cdr)
b. (this (is silly))
c. (is this silly?)
d. (+ 2 3)
e. (+ 2 3)
f. +
g. (2 3)
h. #<procedure cons>
i. cons
j. 'cons
k. quote
l. 5
m. 5
n. 5
o. 5

2.2.4
To yield b: (car (cdr (car '((a b) (c d)))))
To yield c: (car (car (cdr '((a b) (c d)))))
To yield d: (car (cdr (car (cdr '((a b) (c d))))))