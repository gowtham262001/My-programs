import javax.lang.model.util.ElementScanner14;

public class maze1 {
    public static int n =3;
    public static int m =3;
    public static int count =0;
    public static void totalPaths(int i,int j){
        if(i==n-1 && j==m-1){
            count++;
            return;
        }
        else if(i<n && j==m-1)
            totalPaths(i+1, j);
        else if(j<m && i==n-1)
            totalPaths(i, j+1);
        else{
            totalPaths(i+1, j);
            totalPaths(i, j+1);
        }
    }
    public static void main(String[] args) {
        totalPaths(0, 0);
        System.out.println(count);
    }
}
