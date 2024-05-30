// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     // s=pow(n,2);
//     printf("The square of the number is: %f",pow(n,2));

//     return 0;
// }
// # include <stdio.h>
// int main( )
// {
//  float km, m , cm, ft, 
//  inch ;
//  printf ( "\nEnter the distance in Kilometers: " ) ;
//  scanf ( "%f", &km ) ;
//  m = km * 1000 ; cm = m * 100 ;

//  inch = cm / 2.54 ; ft = inch / 12 ;

//  printf ( "Distance in meters = %f\n", m ) ;
//  printf ( "Distance in centimeter = %f\n", cm ) ;
//  printf ( "Distance in feet = %f\n", ft ) ;
//  printf ( "Distance in inches = %f\n", inch ) ;
//  return 0 ;
// } 
# include <stdio.h>
int main( )
{
float r, si,p, n ;
printf ( "Enter values of p, n, r" ) ;
scanf ( "%d %d %f", &p, &n, &r ) ;
si = p * n * r / 100 ;
printf ( "%f\n" , si ) ;
return 0 ;
}
