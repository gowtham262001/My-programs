public class insertionSort {
    public static void main(String[] args) {
        int[] arr = {3,7,4,2,5};
        for(int i=1;i<arr.length;i++){
            int current = arr[i];
            int j = i-1;
            for(;j>=0 && current < arr[j];j--)
            {
                arr[j+1] = arr[j];
            }
            arr[j+1] = current;
            }
        
        for(int i=0;i<arr.length;i++)
        System.out.print(arr[i]+" ");
    }
}
    

