/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CppBProblem2;

/**
 *
 * @author Anushikha and Cristal
 */
public class Pb2 {
    public String fruit = "Apple";
    int value = 7;
    public void print() {
      System.out.println("Apple: "+ value);
   }
    public void change(int a) {
        value = a;
   }

public static void main(String[] args) {
    Pb2 obj1 = new Pb2();
    Pb2 obj2 = obj1;
    obj1.print();
    obj2.print();
    obj1.change(42); // change a member data to 42
    obj1.print();
    obj2.print();
}
}
