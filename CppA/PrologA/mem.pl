/*Anushikha Problem 4 */
mem(E,[E|L]).  /*the chosen element is at the start of the list*/
mem(E,[H|T]):- mem(E,T). 
/*if the head of it doesn't match the existing head of the list, it might match another head of the list by deleting the head and using the rest of the list*/

