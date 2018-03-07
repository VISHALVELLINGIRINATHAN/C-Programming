import java.util.*;
import java.lang.*;
 class odd{
  public static void main(String aa[]){
     int n;
     Scanner s=new Scanner(System.in);
     n=s.nextInt();
     int arr[]=new int[n];
     for(int i=0;i<n;i++)
     {
         arr[i]=s.nextInt();
         
     }
     for(int i=0;i<n;i++)
     {
         if(i%2==0){
             if(arr[i]%2!=0){
                 System.out.print(arr[i]);
             }
         }
         else if(i % 2 != 0)
         {
             if(arr[i]%2==0){
                 System.out.println(arr[i]);
             }
         }
     }

    }

}
