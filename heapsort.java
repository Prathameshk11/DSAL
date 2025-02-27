import java.util.*;

class prac9{
    static void heapify(int arr[], int n , int ind){
        int largest=ind;
        int n1=2*ind +1;
        int n2=2*ind +2;

        if (n1<n && arr[largest]<arr[n1]) {
            largest =n1; 
        }
        if (n2<n && arr[largest]<arr[n2]) {
            largest =n2; 
        }
        if(ind!=largest){
            int temp = arr[ind];
            arr[ind]=arr[largest];
            arr[largest]=temp;
            heapify(arr, n, largest);
        }
    }
    static public void main(String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the number of element : ");
        int n = sc.nextInt();
        int[] arr= new int[n];
        System.out.println("Enter the element in array  : ");
        for ( int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        sc.close();

        for(int i=n/2 -1;i>=0;i--){
            heapify(arr, n, i);
        }

        int ct=1;
        for(int i=n-1;i>0;i--){
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;

        heapify(arr, i, 0);
        System.out.println("Pass "+ct+++" : ");
        for(int j=0;j<n;j++){
            System.out.print(arr[j]+" ");
        }
        System.out.println(" ");
    }
    System.out.println("final sorted array is : ");
    for(int j=0;j<n;j++){
        System.out.print(arr[j]+" ");
    }
    System.out.println(" ");
    }
}