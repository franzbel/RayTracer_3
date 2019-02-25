#include "Utilitarios.h"
using namespace std;
int main() {
    int dpi = 72;
    int width = 640;
    int height = 480;
    int n = width * height;
    ColorRGB* pixeles = new ColorRGB[n];
    for(int x= 0; x < width; x++)
    {
		for( int y = 0; y < height; y++)
		{
			pixeles[y*width+x].r = 0;
			pixeles[y*width+x].g = 0;
			pixeles[y*width+x].b = 1.0;
		}
        
    }
    savebmp("img.bmp", width, height, dpi, pixeles);
    return 0;
}