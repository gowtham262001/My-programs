public class Strings {
   public static void main(String[] args) {
        StringBuilder s =new StringBuilder("Gowtha");
        int j=0;
         for (int i = s.length()-1; i>=s.length()/2;i--){
                
                Character s1 = s.charAt(j);
                s.setCharAt(j, s.charAt(i));
                s.setCharAt(i, s1);
                j++;
        }
        System.out.println(s);
    }
}
