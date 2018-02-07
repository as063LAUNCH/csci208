%Anushikha - 208Lab - PrologB - Problem2
color(blue).
color(red).
color(green).
color(yellow).

coloring([]).
coloring([[C1, C2]]) :- color(C1), color(C2), C1 \= C2.
coloring([H|T]) :- coloring([H]), coloring(T).
