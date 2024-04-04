/*
We need to sum big numbers and we require your help.

Write a function that returns the sum of two numbers. The input numbers are strings and the function must return a string.

Example
add("123", "321"); -> "444"
add("11", "99");   -> "110"
Notes
The input numbers are big.
The input is a string of only digits
The numbers are positives
*/

public class Kata {
  public static String add(String a, String b) {
    int sum = 0;
        String result = "";
        int carry = 0;
        int ch1;
        int ch2;
        int len = Math.max(a.length() , b.length());
        int minLen = Math.min(a.length() , b.length());
        if(a.length() > b.length())
            for(int i = 0 ; i < len - minLen ; i++)
                b = 0 + b;
        else
          for(int i = 0 ; i < len - minLen ; i++)
            a = 0 + a;
        for(int i = len - 1 ; i >= 0 ; i--)
        {
            ch1 = a.charAt(i) - '0';
            ch2 = b.charAt(i) - '0';
            sum = (ch2 + ch1 + carry) % 10;
            carry = (ch2 + ch1 + carry) / 10;
            result = sum + result;
        }
        if (carry > 0)
            result = carry + result;
        while (result.startsWith("0"))
            result = result.substring(1);
    return result;
  }
}
