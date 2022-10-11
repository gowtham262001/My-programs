public class checkingSorting {
    public static boolean sortedOrNot(int[] arr,int index){
        if(index==arr.length-1)
            return true;
        else if(arr[index]<arr[index+1] ){
           return sortedOrNot(arr, index+1); 
        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {
        int[] arr = {1,3,2,4,5};
        boolean ans = sortedOrNot(arr, 0);
        System.out.println(ans);

    }
}
