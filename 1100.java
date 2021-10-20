import java.util.Scanner;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String[] arr= new String[8];

        for(int i=0;i<8;++i) arr[i]=sc.nextLine();

        int cnt=0;
        for(int i=0;i<arr.length;++i){
            for(int j=0;j<arr.length;++j){
                if(i%2==0 && j%2==0 && arr[i].charAt(j)=='F') cnt++;
                if(i%2==1 && j%2==1 && arr[i].charAt(j)=='F') cnt++;
            }
        }
        System.out.println(cnt);
    }
}
