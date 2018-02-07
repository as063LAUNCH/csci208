/*Anushikha Sharma - Problem 3*/
male(rajiv).
male(jawahar).
male(abhinav).
female(ahaana).
female(tanuj).
female(lali).
female(aneela).
female(reva).
female(anushikha).

parent(rajiv, anushikha).
parent(rajiv, reva).
parent(aneela, anushikha).
parent(aneela, reva).
parent(jawahar, rajiv).
parent(lali, rajiv).
parent(abhinav, ahaana).
parent(tanuj, ahaana).
parent(jawahar, abhinav).
parent(lali, abhinav).

father(X,Y) :- male(X),parent(X,Y).
mother(X,Y) :- female(X),parent(X,Y).
son(X,Y) :- male(Y),parent(X,Y).
daughter(X,Y) :- female(Y),parent(X,Y).
sibling(X,Y):- parent(Parent,X),parent(Parent,Y), X \= Y.
grandparent(X,Y) :- parent(X,Someone), parent(Someone,Y).
aunt(X,Y) :- female(X),sibling(X,Mom),mother(Mom,Y).
aunt(X,Y) :- female(X),sibling(X,Dad),father(Dad,Y).
uncle(X,Y) :- male(X),sibling(X,Mom),mother(Mom,Y).
uncle(X,Y) :- male(X),sibling(X,Dad),father(Dad,Y).
cousin(X,Y) :- uncle(Uncle, X),father(Uncle,Y).
ancestor(X,Y) :- parent(X,Y).
ancestor(X,Y) :- parent(X,Somebody),ancestor(Somebody,Y).
ancestor(X,Y) :- X = Y.
