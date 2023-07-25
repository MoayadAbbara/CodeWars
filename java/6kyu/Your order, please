/*
DESCRIPTION:
Your task is to sort a given string. Each word in the string will contain a single number. This number is the position the word should have in the result.

Note: Numbers can be from 1 to 9. So 1 will be the first word (not 0).

If the input string is empty, return an empty string. The words in the input String will only contain valid consecutive numbers.

Examples
"is2 Thi1s T4est 3a"  -->  "Thi1s is2 3a T4est"
"4of Fo1r pe6ople g3ood th5e the2"  -->  "Fo1r the2 g3ood 4of th5e pe6ople"
""  -->  ""
*/

public class Order {
      public static int findnumber(String word) {
        int len = word.length();
        int num = 0;
        for (int i = 0; i < len; i++)
            if (Character.isDigit(word.charAt(i)))
                num = num * 10 + word.charAt(i) - '0';
        return num;
    }
  
  public static String order(String words) {
        int temp;
        String stemp;
        String[] arr = words.split(" ");
        int len = arr.length;
        int nums[] = new int[len];
        for (int i = 0; i < len; i++)
            nums[i] = findnumber(arr[i]);
        for (int i = 0; i < len; i++)
            for (int j = 0; j < len; j++)
                if (nums[i] < nums[j]) {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;

                    stemp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = stemp;
                }
    String sorted = String.join(" ",arr);
    return sorted;
  }
}
