public class removeDuplicates {
    public static boolean check[] = new boolean[26];

    public static void rd(String str,int ind,String ans){
        if(ind==str.length()){
            System.out.println(ans);
            return;
        }
        if(check[str.charAt(ind)-'a']==true){
            rd(str, ind+1,ans);
        }
        else{
            ans = ans+str.charAt(ind);
            check[str.charAt(ind)-'a']=true;
            rd(str, ind+1,ans);
        }
    }
    public static void main(String[] args) {
        String str = "aabbccddeeabcdef";
        String newString = "";
        rd(str,0,newString);

    }
}
