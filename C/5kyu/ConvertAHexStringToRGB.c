/*
When working with color values it can sometimes be useful to extract the individual red, green, and blue (RGB) component values for a color. Implement a function that meets these requirements:

Accepts a case-insensitive hexadecimal color string as its parameter (ex. "#FF9933" or "#ff9933")
Returns a Map<String, int> with the structure {r: 255, g: 153, b: 51} where r, g, and b range from 0 through 255
Note: your implementation does not need to support the shorthand form of hexadecimal notation (ie "#FFF")

Example
"#FF9933" --> {r: 255, g: 153, b: 51}
*/

#include <stdio.h>

typedef struct {
    int r, g, b;
} rgb;
int hextoint (char c) {
  if(c >= '0' && c<= '9')
    return c-'0';
  else if(c >= 'a' && c<='f')
    return c-'a'+10;
  else if (c >= 'A' && c<='F')
    return c - 'A' +10;
}
rgb hex_str_to_rgb(const char *hex_str) {
  rgb converted;
  converted.r =0;
  converted.g =0;
  converted.b =0;
  converted.r += 16*hextoint(hex_str[1]);
  converted.r += hextoint(hex_str[2]);
  converted.g += 16*hextoint(hex_str[3]);
  converted.g += hextoint(hex_str[4]);
  converted.b += 16*hextoint(hex_str[5]);
  converted.b += hextoint(hex_str[6]);
  return converted;
 }
