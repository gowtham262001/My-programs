import java.util.*;
public class putxatend {
    public static void main(String[] args) {
        String s = "abxcdxxefxxgh";
        int count=0;
        String ans = "";
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='x'){
                count = count+1;
            }
            else
            ans = ans+s.charAt(i);
        }
        for(int i=0;i<count;i++){
            ans = ans+'x';
        }
        System.out.println(ans);
    }
}
