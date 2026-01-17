#include<stdio.h>
#include<math.h>

double Temph(double  h);
double Tempc(double c);

/* NEW FUNCTION PROTOTYPE */
void ConvertTemp(double c, double *kelvin, double *fahrenheit);

int main(){
 double x ;
 printf("Enter the temperature : ");
 scanf("%lf",&x);

 Temph(x);
 Tempc(x);

 printf("The weather is : %lf",Tempc(x),Temph(x));

 /* USING THE NEW FUNCTION */
 double k, f;
 ConvertTemp(x, &k, &f);
 printf("\nKelvin: %lf", k);
 printf("\nFahrenheit: %lf", f);

  return 0;
}

double Temph(double h){
  if (h>25){
    printf("It's too hot : %lf");
  }
  else if ( h >10 && h<25){
    printf("It's Moderate temperature : %lf" );
  }
   return h ;
}

double Tempc(double c){
if (c<10){
  printf("It's too cold : %lf");
}
return c ;
}

/* NEW FUNCTION ADDED */
void ConvertTemp(double c, double *kelvin, double *fahrenheit){
    *kelvin = c + 273.15;
    *fahrenheit = (c * 9.0 / 5.0) + 32;
}
