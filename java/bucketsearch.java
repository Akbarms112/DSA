import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;



public class bucketsearch {
    void bucketsearch(float[] arr,int n){
        if(n<=0)  return;
        ArrayList<Float>[] buckets=new ArrayList[n];
        for(int i=0;i<n;i++)
            buckets[i]=new ArrayList<Float>();
        for (int i=0; i<n;i++) {
                int bucketIdx=(int)arr[i]*n;
                buckets[bucketIdx].add(arr[i]);
            }
        for(int i=0;i<n;i++){
            Collections.sort(buckets[i]);
        }
        int index=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<buckets[i].size();j++){
                arr[index]=buckets[i].get(j);
                index++;
            }
        }



    }
    public static void main(String[] args) {
        float[] arr={
            (float)0.44,(float)0.4,(float)0.64,
            (float)0.20,(float)0.44,(float)0.54,
            (float)0.70,(float)0.60,(float)0.80
        };
        bucketsearch bs=new bucketsearch();
        bs.bucketsearch(arr,arr.length);
        System.out.println("Sorted Array");
        System.out.println(Arrays.toString(arr));
    }
    
}
