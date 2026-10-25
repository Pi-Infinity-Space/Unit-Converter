//This project is to build a unit converter
#include<stdio.h>
#include<math.h>

int main(){
	float meter, kilometer;
	float farenheit, celsius;
	float ms, kmh;
	float gram, kilogram;
	float seconds, minutes;
//===========================================================================
	int choice;
	printf("Choose the required unit for your conversion.\n");
	printf("Choose '1' for conversion of Meter to Kilometers.\n");
	printf("Choose '2' for conversion of Kilometers to Meter.\n");
	printf("Choose '3' for conversion of celsius to farenheit.\n");
	printf("Choose '4' for conversion of farenheit to celsius.\n");
	printf("Choose '5' for conversion of meters per second to kilometer per hour.\n");
	printf("Choose '6' for conversion of kilometer per hour to meter per second.\n");
	printf("Choose '7' for conversion of Gram to kilogram.\n");
	printf("Choose '8' for conversion of Kilogram to gram.\n");
	printf("Choose '9' for conversion of seconds to minutes.\n");
	printf("Choose '0' for conversion of minutes to seconds.\n");
	scanf("%d", &choice);
	
	switch (choice){
//===========================================================================
		//	Distance
		case 1 :
			//	Meter to Kilometers
			printf("Input distance in meters: ");
			scanf("%f", &meter);
			kilometer = meter/1000;
			printf("%f m is equal to %f km.", meter, kilometer);
			break;
		case 2 :
			//	Kilometers to Meter
			printf("Input distance in kilometer: ");
			scanf("%f", &kilometer);
			meter = kilometer*1000;
			printf("%f kilometers is equal to %f meters.", kilometer, meter);
			break;
//===========================================================================
		//Temperature
		case 3 :
			//celsius to farenheit
			printf("Input Temperature in celsius: ");
			scanf("%f", &celsius);
			farenheit = ((9*celsius)+160)/5;
			printf("%f celsuis is equal to %f farenheit.", celsius, farenheit);
			break;
		case 4 :
			//farenheit to celsius
			printf("Input temperature in farenheit: ");
			scanf("%f", &farenheit);
			celsius = ((5*farenheit)-160)/9;
			printf("%f farenheit is equal to %f celsius.", farenheit, celsius);
			break;
//===========================================================================
		//Speed	
		case 5 :
			//ms to kmh
			printf("Input speed in meters per second: ");
			scanf("%f", &ms);
			kmh = (ms*18)/5;
			printf("%f m/s is equal to %f km/h.", ms, kmh);
			break;
		case 6 :
			//kmh to ms
			printf("Input speed in kilometer per hour: ");
			scanf("%f", &kmh);
			ms = (kmh*5)/18;
			printf("%f km/h is equal to %f m/s.", kmh, ms);
			break;
//===========================================================================
		//Mass
		case 7 :
			//Gram to kilogram
			printf("Input mass in grams: ");
			scanf("%f", &gram);
			kilogram = gram/1000;
			printf("%f grams is equal to %f kilogram.", gram, kilogram);
			break;
		case 8 :
			//Kilogram to gram
			printf("Input mass in kilograms: ");
			scanf("%f", &kilogram);
			gram = kilogram*1000;
			printf("%f kilograms is equal to %f grams.", kilogram, gram);
			break;
//===========================================================================
		//Time
		case 9 :
			//seconds to minutes
			printf("Input time in seconds: ");
			scanf("%f", &seconds);
			minutes = seconds/60;
			printf("%f seconds is equal to %f minutes.", seconds, minutes);
			break;
		case 0 :
			//minutes to seconds
			printf("Input time in minutes: ");
			scanf("%f", &minutes);
			seconds = minutes*60;
			printf("%f minutes is equal to %f seconds.", minutes, seconds);
			break;
//===========================================================================
		default:
			printf("Error!\nPlease choose from 1 through to 0.");
			break;
	}
	return 0;
}
