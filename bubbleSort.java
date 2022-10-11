public class bubbleSort {
    public static void main(String[] args) {
        int[] arr ={5,8,1,3,4};  //  i=0
        for(int i=0;i<arr.length-1;i++){
            for(int j=0;j<arr.length-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int c = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=c;
                }
                    
            }
        }
        for(int i=0;i<arr.length;i++)
            System.out.print(arr[i]+" ");
    }

}
