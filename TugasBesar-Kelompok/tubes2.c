#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
      int i;
      float m, h;
      double g,t,hn,KE,PE;
      double u,v;
      FILE *fptr;
      fptr=fopen("energy.dat","w");
      /* Initialize the variables from the formulas */
      printf("Insert Mass\t = "); scanf("%f", &m); /* Preset mass (kg) value */
      printf("Insert Height\t = "); scanf("%f", &h); /* Preset height (m) value */
      g=9.8; /* Preset gravitational acceleration value */
      t=0.1; /* Preset time division (s) value */
      u=0.0; /* Preset initial velocity (m/s) value */
      for(i=0;i<100;i++)
      {
            v=u+g*t;  /* Find velocity v from initial velocity, accel. of 
gravity, and time */
            KE=0.5*m*pow(v,2);  /* Find kinetic energy from mass and 
velocity */
            hn=u*t+0.5*g*pow(t,2); /* Find new height after time t */
            h=h-hn; /* New height after falling hn meters */
            PE=m*g*h; /* Find potential energy */
            u=v;  /* Set the initial velocity for the next increment of the 
loop to the current velocity */
            /* If h = 0.0, then we have reached the ground */
            if(h<=0.0)
                 break;
            fprintf(fptr,"%lf\t%lf\n",KE,PE);
      }
      fclose(fptr);
}