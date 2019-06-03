import java.io.*;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Set;

public class Solution {
    public static void main(String args[]) {
        try {
            File file = new File("portals.in");

            BufferedReader br = new BufferedReader(new FileReader(file));

            int tests = Integer.parseInt(br.readLine());
            for (int i = 0; i < tests; i++) {
                int len = Integer.parseInt(br.readLine());
                StringBuilder op = new StringBuilder(optimize(br.readLine()));
                String strk = op.toString();
                if(strk.endsWith("#e") || strk.endsWith("#s") || strk.startsWith("s#") || strk.startsWith("e#") || strk.endsWith("#.e") || strk.endsWith("#.s") || strk.startsWith("s.#") || strk.startsWith("e.#")) {
                    System.out.println(0);
                    continue;
                }
                int k = op.indexOf(".", 0);
                Set<String> set = new HashSet<>();
                boolean found = false;
                while(k!=-1) {
                    op.setCharAt(k,'#');
                    String str = optimize(op.toString());

                    found = str.endsWith("#e") || str.endsWith("#s") || str.startsWith("s#") || str.startsWith("e#") || str.endsWith("#.e") || str.endsWith("#.s") || str.startsWith("s.#") || str.startsWith("e.#");
                    if(found) {
                        break;
                    }
                    set.add(str);
                    op.setCharAt(k,'.');
                    k++;
                    k = op.indexOf(".", k);
                }
                if(found) {
                    System.out.println(1);
                    continue;
                }
                for(String sk: set) {
                    StringBuilder st = new StringBuilder(sk);
                    k = st.indexOf(".", 0);
                    while(k!=-1) {
                        st.setCharAt(k,'#');
                        String str = optimize(st.toString());
                        found = str.endsWith("#e") || str.endsWith("#.e") || str.endsWith("#.s") || str.startsWith("s.#") || str.startsWith("e.#") ||  str.endsWith("#s") || str.startsWith("s#") || str.startsWith("e#");
                        if(found) {
                            break;
                        }
                        st.setCharAt(k,'.');
                        k++;
                        k = st.indexOf(".", k);
                    }
                    if(found) break;
                }
                if(found) {
                    System.out.println(2);
                } else {
                    System.out.println(-1);
                }

            }

        }catch(Exception ignored) {
            ignored.printStackTrace();
        }

    }

    public static String optimize(String test) {
        StringBuilder small = new StringBuilder("s");
        int sloc = test.indexOf('s');
        int eloc = test.indexOf('e');
        int esloc = -1;
        int k = sloc;
        boolean eright = true;
        //Move left
        while (--k >= 0) {
            char c = test.charAt(k);
            if (c == '#') {
                if (small.charAt(0) == '.')
                    small.setCharAt(0, '#');
                else small.insert(0, '#');
                break;
            } else if (c == '.') {
                if (small.charAt(0) == 's') {
                    small.insert(0, c);
                }
            } else if (c == 'o') {
                small.insert(0, c);
                break;
            } else if (c == 'e') {
                eright = false;
                esloc = 0;
                break;
            }
        }
        int minchar = k;
        //Move right
        k = sloc;
        boolean eleft = true;
        while (++k < test.length()) {
            char c = test.charAt(k);
            if (c == '#') {
                if (small.charAt(small.length() - 1) == '.')
                    small.setCharAt(small.length() - 1, '#');
                else small.append("#");
                break;
            } else if (c == '.') {
                if (small.charAt(small.length() - 1) == 's') {
                    small.append(c);
                }
            } else if (c == 'o') {
                small.append(c);
                break;
            } else if (c == 'e') {
                eleft = false;
                esloc = small.length() - 1;
                break;
            }
        }
        int maxchar = k;

        k = eloc;
        StringBuilder big = new StringBuilder("e");
        if (eleft) {
            while ((eloc > sloc && --k > maxchar) || (eloc < sloc && --k >= 0)) {
                char c = test.charAt(k);
                if (c == '#') {
                    if (big.charAt(0) == '.')
                        big.setCharAt(0, '#');
                    else big.insert(0, '#');
                    break;
                } else if (c == '.') {
                    if (big.charAt(0) == 'e') {
                        big.insert(0, c);
                    }
                } else if (c == 'o') {
                    big.insert(0, c);
                    break;
                }
            }
        }
        k = eloc;
        if (eright) {
            while ((eloc > sloc && ++k < test.length()) || (eloc < sloc && ++k < minchar)) {
                char c = test.charAt(k);
                if (c == '#') {
                    if (big.charAt(big.length() - 1) == '.')
                        big.setCharAt(big.length() - 1, '#');
                    else big.append("#");
                    break;
                } else if (c == '.') {
                    if (big.charAt(big.length() - 1) == 'e') {
                        big.append(c);
                    }
                } else if (c == 'o') {
                    big.append(c);
                    break;
                }
            }
        }
        if(eloc>sloc) {
            if(small.charAt(small.length()-1) == big.charAt(0)) {
                big.deleteCharAt(0);
            }
            small.append(big);
        } else {
            if(big.charAt(big.length()-1) == small.charAt(0)) {
                small.deleteCharAt(0);
            }
            small.insert(0, big);
        }
        while(small.charAt(0) != 's' && small.charAt(0) != 'o' && small.charAt(0) != 'e') {
            small.deleteCharAt(0);
        }
        while(small.charAt(small.length()-1) != 's' && small.charAt(small.length()-1) != 'o' && small.charAt(small.length()-1) != 'e') {
            small.deleteCharAt(small.length()-1);
        }
        return small.toString();
    }
}