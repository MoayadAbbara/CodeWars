/*
DESCRIPTION:
Your goal in this kata is to implement a difference function, which subtracts one list from another and returns the result.

It should remove all values from list a, which are present in list b keeping their order.

Kata.arrayDiff(new int[] {1, 2}, new int[] {1}) => new int[] {2}
If a value is present in b, all of its occurrences must be removed from the other:

Kata.arrayDiff(new int[] {1, 2, 2, 2, 3}, new int[] {2}) => new int[] {1, 3}
*/

public class Kata {

      public static boolean isin (int arr[] , int num)
    {
        for(int i = 0 ; i <arr.length ; i++)
        {
            if(num == arr[i])
                return true;
        }
        return false;
    }

    public static int findsize (int a[] , int b[])
    {
        int size = 0;
        for (int i = 0 ; i < a.length ; i++)
        {
            if(!isin(b,a[i]))
            {
                size++;
            }
        }
        return size;
    }

    public static int[] arrayDiff(int[] a, int[] b) {
        int c[] = new int[findsize(a,b)];
        int index = 0;
        for (int i = 0 ; i < a.length ; i++)
        {
            if(!isin(b,a[i]))
            {
                c[index++] = a[i];
            }
        }
        for (int i = 0 ; i < c.length ; i++)
            System.out.println(c[i]);
        return c;
    }

}
