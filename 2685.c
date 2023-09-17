#include <stdio.h>

int main(){

    float y,x;
    while (scanf("%f", &y) != EOF)
	{

		x = (int)y;
		int hour = ((int)(y * 240) / 3600) % 60;
		int minutes = ((int)(y * 240) / 60) % 60;
		int second = (int)(y * 240) % 60;

		if ((x >= 0 && x < 90) || x == 360)
			printf("Bom Dia!!\n%02d:%02d:%02d\n", (hour + 6) % 24, minutes, second);
		else if (x >= 90 && x < 180)
			printf("Boa Tarde!!\n%02d:%02d:%02d\n", (hour + 6) % 24, minutes, second);
		else if (x >= 180 && x < 270)
			printf("Boa Noite!!\n%02d:%02d:%02d\n", (hour + 6) % 24, minutes, second);
		else if (x >= 270 && x < 360)
			printf("De Madrugada!!\n%02d:%02d:%02d\n", (hour + 6) % 24, minutes, second);
			
	}

}