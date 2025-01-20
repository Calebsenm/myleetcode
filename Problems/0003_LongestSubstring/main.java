import java.util.ArrayList;
import java.util.Arrays;

public class main {

    public static int lengthOfLongestSubstring(String s) {

        int max_leng = 0;
        int current_leng = 0;
        int start = 0;
        ArrayList<String> list_num = new ArrayList<>(Arrays.asList(s.split("")));                                          // dinámica
        int len_words = list_num.size();

        if (len_words <= 1) {
            return len_words;
        }

        for (int i = 0; i < len_words; i++) {
            for (int j = start; j < i; j++) {

                if (s.charAt(i) == s.charAt(j)) {
                    start = j + 1;
                    current_leng = i - start;
                    break;
                }
            }

            current_leng++;
            if (current_leng > max_leng) {
                max_leng = current_leng;
            }
        }

        return max_leng;
    }

    public static void main(String[] args) {
        int numbers = lengthOfLongestSubstring("abcaaaaa");
        System.out.println(numbers);
    }
}

