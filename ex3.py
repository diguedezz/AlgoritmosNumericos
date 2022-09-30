from __future__ import division  
from math import e

# import matplotlib.pyplot as plt
# # import seaborn as sns

# def biseccao(a, b, gT):
    
#     T = (a+b)/2
    
    # gT = 1-(1+T+((T**2)/2))*(e**(-T))
    
#     # for _ in range(10**(-5)):
        
#     while(gT > 10**(-5)):

#         T = (a+b)/2
#         gT = 1-(1+T+((T**2)/2))*(e**(-T))
        
#         if(T == 0):
#             break
#         if(T > 0):
#             a = T
#         else:
#             b = T
    
#     return gT


 
def bissecao(f, a, b, TOL, N):  
    i = 1  
    fa = float(f(a))  
    while (i <= N):  
        #iteracao da bissecao  
        p = a + (b-a)/2  
        fp = f(p)  
        #condicao de parada  
        if ((fp == 0) or ((b-a)/2 < TOL)):  
            return p  
        #bissecta o intervalo  
        i = i+1  
        if (fa * fp > 0):  
            a = p  
            fa = fp  
        else:  
            b = p  
 
    raise NameError('Num. max. de iter. excedido!');


def secante(a, b, fx):
    int


def main():
    a = 0.1
    b = 0.9
    T = (a+b)/2
    # f = float
    print(bissecao(f,a,b,10**(-5),50))
main()
