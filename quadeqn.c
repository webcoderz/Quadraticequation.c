/*

CMPSCI 1113-01
2/8/17
Quadratic Equation
*/

#include <stdio.h>
#include <math.h>

void solve_linear(int,int);
void solve_quad(int,int,int);
void solve_real(int,int);
void solve_complex();
int a; int b; int c; int x;

// Main program

int main(int argc, char*argv[])
{
      if (argc==4)
      {
        sscanf("%d" ,&a) ;
        sscanf("%d" ,&b) ;
        sscanf("%d" ,&c) ;
        
          if (a==0 && b==0)
              {
              printf("Error. %d and %d lead to a Degenerate Equation! \n",a ,b);
              
                   else
                         {
                        solve_linear(int a,int b,int c);
                         }
              }
          else
              {
              solve_quad(int a, int b, int c);
              }
     }    
}           
                               //sub programs
      
      
                              solve_real()
                                     {
                                    int x1; int x2; float;
                                    
                                    x1 = (-b + sqrt(b*b-4*a*c))/(2*a) ;
                                    
                                    x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
                                    
                                           printf("%f is x1.\n",x1);
                                           printf("%f is x2.\n ",x2);
                                     }
                              
                              solve_complex()
                                    {
                                          int x_real; int x_imag; float ;
                                    
                                    x_real = -b/(2.0*a);
                                          
                                    x_imag = (sqrt(b*b-4*a*c))/(2*a);
                                                
                                                printf("%f + %fi\n", x_real , x_imag);
                                                printf("%f - %fi\n", x_real , x_imag);
                                    }
                                          





