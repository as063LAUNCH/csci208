%Anushikha - PrologB - 208 Lab problem1
intree(leaf(X), V) :- X = V.
intree(node(T1,T2), V) :- intree(T1,V).
intree(node(T1,T2), V) :- intree(T2,V). 

numberOfLeaves(leaf(T),N):- N is 1.

numberOfLeaves(node(T1,T2), N):- 
    numberOfLeaves(T1, Temp),
    numberOfLeaves(T2, Temp2), 
    N is Temp + Temp2.

position(leaf(X),V,N):- X = V, N =1.

position(node(T1,T2),V,N):- position(T1,V,N).


position(node(T1,T2),V,N):- numberOfLeaves(T1,Temp),position(T2,V,Temp2), N is Temp + Temp2.
    
    
    
    
