import java.io.*;

public class Solution {
    public static void main(String args[]) {
      try {
         File file = new File("hamming.in");

        BufferedReader br = new BufferedReader(new FileReader(file));
        int tests = Integer.parseInt(br.readLine());
        for(int i=0; i<tests; i++) {
            int len = Integer.parseInt(br.readLine());
            String a = br.readLine();
            String b = br.readLine();
            int z1 = 0, o2 = 0;
            for(int j=0; j<len; j++) if(a.charAt(j) == '0') z1++;
            for(int j=0; j<len; j++) if(b.charAt(j) == '0') o2++;
            int z2 = len-o2, o1 = len-z1;
            System.out.println(Math.min(z1,z2) + Math.min(o1,o2));

        }


    } catch(Exception e) {}
}