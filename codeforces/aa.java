/* package codechef; // don't place package name! */

// Online Java Compiler
// Use this editor to write, compile and run your Java code online

import java.util.*;

class Main {
   public static void main(String[] args)  {
     Scanner sc = new Scanner(System.in);
     int n = sc.nextInt();
     int [] arr = new int[n];
     for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
     for(int i=0; i<n-1;i++){
          if(arr[i]<arr[i+1]){
            int m = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=m;
          }
      }
        System.out.print(arr[1]);

     
   }
}