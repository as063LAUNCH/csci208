%Anushikha Sharma - 208 Lab PrologA - Problem 3
%check
check(a, int).
check(b, double).
check(c, string).
check(add, [int,int,int]).
check(add, [double,double,double]).
check(add, [string,string,string]).
check(bar, [double, int]).
checkprint(X,Y):- check(X,Y), write('CHECK '), write(X), write(' is '), write(Y), write('\n').
%coerce
coerce_base(int,double).
coerce_base(double, string).
coerce(X,Y) :- coerce_base(X,Y).
coerce(X,Z) :- coerce_base(X,Y), coerce(Y,Z).
coerceprint(X,Y) :- write('COERCE '), write(X), write(' to '), write(Y), write('\n'), coerce(X,Y).
%equiv
equiv(T1,T2):- write('EQUIV '), write(T1), write(', '), write(T2), write('\n'), T1 = T2.
equiv(T1,T2):- not(T1=T2), coerceprint(T1,T2).
%inferapply1
infer(X,T):- checkprint(X,T).
infer(apply_1(F, X), T) :-
  infer(X,TX),
  infer(F,TF),
  TF = [TARG,TRETURN],
  equiv(TX,TARG),
  TRETURN = T,
  write('INFER '), write(apply_1(F,X)), write(' is '), write(T), write('\n').
%inferapply2.
infer(apply_2(F, X, Y), T) :-
  infer(X,TX),
  infer(F,TF),
  TF = [TARG,TRETURN],
  equiv(TX,TARG),
  TRETURN = T,
  write('INFER '), write(apply_1(F,X)), write(' is '), write(T), write('\n').
%typecheck
typecheck(assign(X,Y)) :-
    infer(X, TX),
    infer(Y, TY),
    equiv(TY, TX),
    write('TYPECHECK'), write('\n').



