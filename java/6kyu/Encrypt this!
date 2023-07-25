/*
DESCRIPTION:
Acknowledgments:
I thank yvonne-liu for the idea and for the example tests :)

Description:
Encrypt this!

You want to create secret messages which can be deciphered by the Decipher this! kata. Here are the conditions:

Your message is a string containing space separated words.
You need to encrypt each word in the message using the following rules:
The first letter must be converted to its ASCII code.
The second letter must be switched with the last letter
Keepin' it simple: There are no special characters in the input.
Examples:
Kata.encryptThis("Hello") => "72olle"
Kata.encryptThis("good") => "103doo"
Kata.encryptThis("hello world") => "104olle 119drlo"
*/

public class Kata {
public static String encryptThis(String text) {
    String[] words = text.split(" ");
    String[] secretWords = new String[words.length];
    for (int i = 0; i < words.length; i++) {
        secretWords[i] = secretWord(words[i]);
    }
    return String.join(" ", secretWords);
}

public static String secretWord(String text) {
    if (text.length() == 0) {
        return "";
    }
    int first = text.charAt(0);
    if (text.length() == 1) {
        return String.valueOf(first);
    }
    if (text.length() == 2) {
        return String.valueOf(first) + text.charAt(1);
    }
    return String.valueOf(first) + text.charAt(text.length() - 1)
            + text.substring(2, text.length() - 1) + text.charAt(1);
}
}
