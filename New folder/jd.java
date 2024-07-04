import java.utill.*;

class sorting {
    public static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args)
    {
        int arr[]={7,8,3,1,2};
        for(int i=1;i<arr.length;i++)
        {
            int current=i;
            int j=i-1;
            while(i>=0 && arr[j] > current)
        }
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}