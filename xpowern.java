public class xpowern {
    public static int powern(int x,int n){
            if(n==1){
                return x;
            }
            else if(n%2==0){
                int ans = powern(x,n/2)*powern(x,n/2);
                return ans;
            }
            else{
                int ans = powern(x,n/2)*powern(x,n/2)*x;
                return ans;
            }
            
    }
    public static void main(String[] args) {
        int x = 2,n = 10;
        int ans = powern(x, n);
        System.out.println(ans);
    }
}
