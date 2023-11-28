def simpson13(f,a,b,n):
    h = float(b-a)/h
    result = f(a) +f(b)
    for i in range(1,n):
        k = a + i*h
        if i in range(1,n):
            k = a+i*h
            if i%2 == 0:   #i%3 == 0;
                result = result +2*f(k)
            else:
                result = result+4*f(k)        #3*f(k)
                result = (h/3)* result        #(3*h/8)*result
                print(simpsin 1/3 rusult",result)
                return result
from  math import *
 def f(x):
     return sqrt(1+x**2)
