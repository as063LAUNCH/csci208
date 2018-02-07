%Anushikha Sharma - Problem1 and Problem2
edge(a,f).
edge(a,b).
edge(b,c).
edge(g,c).
edge(f,g).
edge(f,c).
edge(c,d).
edge(e,d).
edge(c,e).
edge(f,e).

path(Node1,Node2):-
Node1 = Node2.
path(Node1,Node2) :-
edge(Node1,Node2).

path(Node1,Node2) :-
edge(Node1,SomeNode),
path(SomeNode,Node2).

path2(Node1,Node2) :-
edge(Node1,SomeNode),
edge(SomeNode,Node2).


/*just using the edge predicate*/
path3(Node1, Node2) :-
edge(Node1, SomeNode),
edge(SomeNode,SomeNode1),
edge(SomeNode1, Node2).

/*Using path2*/
path3(Node1, Node2, Node3) :-
path2(Node1,Node2),
edge(Node2,Node3).


