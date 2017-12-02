 /*
    Glenn Ahearne
    06/11/17
    Exercise 9
    Sphere Calculations
  */

    /**Preprocessive Directives*/
#include <iostream>
#include <math.h>
#define PI 3.141592654

using namespace std;

    /**Function Prototypes*/
void sphere(double, double*, double*);
int main()
{

    /**Variable Declarations*/
    double radius, surfarea, volume;
    double *surfA, *vol;

        /**Assign pointer to address of volume and surface area*/
    surfA = &surfarea;
     vol = &volume;

         /**Do while loop to ensure radius is greater than zero*/
    do

    {
        cout<< "\n\n\t\tEnter Radius Value Greater than Zero : \t";
        cin>> radius;
    }

    while (radius <= 0);

    /**calling sphere function*/
  sphere(radius, surfA, vol);

      /**outputting result to user*/
   cout << "\n\n\t\tSurface Area is : "<< surfarea << endl;
   cout << "\n\n\t\tVolume is : "<< volume << endl;

   return 0;
}
    /**sphere function*/
 void  sphere(double radius, double *surfA, double *vol)

    /**calculating surface area and volume and assigning them to pointer*/
   {
       *surfA = 4.0 * PI * (pow(radius,2));

       *vol =  4.0/3.0 * PI *(pow(radius,3));
   }




