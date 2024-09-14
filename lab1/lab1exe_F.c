/*
 *  lab1exe_F.c
 *  Created by Mahmood Moussavi
 *  Completed by: Stephan Agwai
 *  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double G = 9.8;   /* gravitation acceleration 9.8 m/s^2 */
const double PI = 3.141592654;


double Projectile_travel_time(double a, double v){
    double t;
    t = (2 * v * sin( a ) ) / G;
    return t;
}

double Projectile_travel_distance(double a, double v){
    double d;
    d = ((pow(v, (double) 2)) / G) * sin(2 * a);
    return d;
}

double degree_to_radian(double d){
    double a;
    a = ( PI * d ) / 180;
    return a;
}

void create_table(double v){
    printf("Angle                      t                    d\n");
    printf("(deg)                    (sec)                (m)\n");
    double iter = 0;
    while (iter <= 90 ){
        printf("%f              %f              %f\n", iter, Projectile_travel_time(degree_to_radian(iter), v), Projectile_travel_distance(degree_to_radian(iter), v) );
        iter += 5;
    };
}

int main(void)
{
    int n;
    double velocity;
    
    printf ("Please enter the velocity at which the projectile is launched (m/sec): ");
    n = scanf("%lf" ,&velocity);
    
    if(n != 1)
    {
        printf("Invlid input. Bye...");
        exit(1);
    }
    
    while (velocity < 0 )
    {
        printf ("please enter a positive number for velocity: ");
        n = scanf("%lf", &velocity);
        if(n != 1)
        {
            printf("Invlid input. Bye...");
            exit(1);
        }
    }
    
    create_table(velocity);
    return 0;
}

/* UNCOMMENT THE CALL TO THE create_table IN THE main FUNCTION, AND COMPLETE THE PROGRAM */
