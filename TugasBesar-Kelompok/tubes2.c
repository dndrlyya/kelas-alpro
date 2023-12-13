#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main(){
      int i;
      float m, h;
      double g,t,hn,KE,PE, ME;
      double u,v;
      FILE *fptr;
      fptr=fopen("energy.dat","w");
      printf("Insert Mass\t = "); scanf("%f", &m);
      printf("Insert Height\t = "); scanf("%f", &h); 
      g=9.8; 
      t=0.1;
      u=0.0; 
      for(i=0;i<100;i++)
      {
            v=u+g*t; 
            KE=0.5*m*pow(v,2); 
            hn=u*t+0.5*g*pow(t,2); 
            h=h-hn; 
            PE=m*g*h; 
            u=v; 
            if(h<=0.0)
                 break;
            ME = KE + PE;
            fprintf(fptr,"%d\t%lf\t%lf\t%lf\n",i,KE,PE,ME);
      }
      fclose(fptr);
}