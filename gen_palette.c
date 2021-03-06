#include <stdio.h>
#include <stdint.h>

const unsigned char palette[][3] = {
    {7,7,7},
    {31,7,7},
    {47,15,7},
    {71,15,7},
    {87,23,7},
    {103,31,7},
    {119,31,7},
    {143,39,7},
    {159,47,7},
    {175,63,7},
    {191,71,7},
    {199,71,7},
    {223,79,7},
    {223,87,7},
    {223,87,7},
    {215,95,7},
    {215,95,7},
    {215,103,15},
    {207,111,15},
    {207,119,15},
    {207,127,15},
    {207,135,23},
    {199,135,23},
    {199,143,23},
    {199,151,31},
    {191,159,31},
    {191,159,31},
    {191,167,39},
    {191,167,39},
    {191,175,47},
    {183,175,47},
    {183,183,47},
    {183,183,55},
    {207,207,111},
    {223,223,159},
    {239,239,199},
    {255,255,255}
};
int main(void) {
        printf("const uint16_t palette[] = {");

        for (int i = 0; i < 37; i++) {
                uint16_t p = 0;
                uint16_t r,g,b;
                r = palette[i][0] >> 4;
                g = palette[i][1] >> 4;
                b = palette[i][2] >> 4;
                p = (r << 12) | (g << 8) | (b << 4);
                
                //fix
                p = p & 0xFF;
                
                printf("%d", p);
                if (i < 36) {
                        printf(",");
                }
        }
        printf("};\n\n");

        return 0;

}
