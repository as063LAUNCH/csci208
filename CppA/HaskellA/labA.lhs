Anushikha Sharma
208 Lab - Haskell A 
 
-->fact :: Int -> Int

>fact 0 = 1
>fact n = n * fact (n-1)

Problem 1 - 10 choose 5
1. choose
-->choose :: Int -> (Int -> Int)

>choose x y = fact(x) `div` ( fact(x) * fact( x-y) )

*Main> choose 10 5
252
it :: Int

QUESTIONS 
2. 
a.  Since there isn't a base case, the program goes on forever until it runs out of local stack. Thus, we use the base case to fix this problem. 
b. No, the parenthesis around fact(n-1) are not necessary. Haskell understands that the parameters are grouped with a function. However, the parenthesis aroud (n-1) are necessary, else fact n begins to get calculated leading to an infinite.  

3. Same as part 1

*Main> choose 10 5
252

4. If we do the fact 50, we get a negative number because the value generated is more than the + signed range allows for. 50 choose 5 gives us 0. 

5.  choose 2

>choose2 :: Int -> (Int -> Int)
>choose2 0 0 = 1
>choose2 x 0 = 1
>choose2 0 y = 0
>choose2 x y = choose2 (x-1) (y-1) + choose2 (x-1) (y)

6.  choose2 50 5 seems to run correctly we get 2118760. Though the system takes time to produce the result since it is a muh larger computation 
choose 50 5 does not run correctly because the function does not have the correct types to complete such large computations. 

7. If we get rid of the type signature, both functions work but choose produces 0 and is faster than choose2.

8. Fib function. 

>fib :: Int -> (Int)
>fib 0 = 1
>fib 1 = 1
>fib n =fib( n-1) +fib ( n-2)

*Main> fib 1
1
*Main> fib 2
2
*Main> fib 3
3
*Main> fib 4
5
*Main> fib 5
8
*Main> fib 6
13
*Main> fib 7
21
*Main> fib 8
34
*Main> fib 9
55
*Main> fib 10
89

Problem 2 - fibsel

>fibsel n = if n==0 then 1 else if n == 1 then 1 else  fib(n-1) + fib(n-2)

Sample Result - 
*Main> fibsel 4
5
*Main> fibsel 10
89

Problem 3 - fibcase

>fibcase n = case n of
> 	 0 -> 1
> 	 1 -> 1
>	 n -> fib(n-1) + fib(n-2)


>fibguard n 
>	  | n == 0	= 1
>	  | n == 1	= 1
>	  | otherwise = fib(n-1) + fib(n-2)

Sample Result - 
*Main> fibcase 6
13
*Main> fibcase 10
89
*Main> fibguard 10
89
*Main> fibguard 5
8

Problem 4 - grade and abs

>grade :: Int -> Char
>grade n
>      | 100 < n	= 'E'
>      | 90 <= n	= 'A'
>      | 80 <= n	= 'B'
>      | 70 <= n	= 'C'
>      | 60 <= n	= 'D'
>      | 0 <= n		= 'F'
>      | otherwise = 'E'

>abs2 n = if n > 0 then n else   n * (-1)

grade Sample Result - 
*Main> grade 90
'A'
*Main> grade 80
'B'
*Main> grade 79
'C'
*Main> grade 66
'D'
*Main> grade 59
'F'
*Main> grade 56
'F'
*Main> grade 0
'F'
*Main> grade 112
'E'

Abs Sample Result - 
*Main> abs (-3)
3


Problem 5 - hyp

>hyp :: Int -> Int -> Float
>hyp m n = if m < 0 then 0.0 else if n < 0 then 0.0 else sqrt(fromIntegral(m)* fromIntegral(m) + fromIntegral(n) * fromIntegral(n))

Sample Result - 
*Main> hyp 6 8
10.0
*Main> hyp 3 4
5.0
 
