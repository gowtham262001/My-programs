public class permutations {
    public static int count = 0;
    public static void recursion(String s,String newString){
        if(s.length()==0){
            System.out.println(newString);
            count++;
            return;
        }
        for(int i=0;i<s.length();i++){
            String subString  = s.substring(0, i)+s.substring(i+1);
             recursion(subString, newString+s.charAt(i));
    }
}
    public static void main(String[] args) {
        String newString = "";
        recursion("abcde",  newString);
        System.out.println(count);
    }
}
