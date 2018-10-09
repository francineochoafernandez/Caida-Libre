#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;

typedef struct ObjetoCayendo
{
  float masa,c,gravedad,t,v;
  float EvaluarVel(float t)
  {
    v=( (gravedad*masa)/c ) * (1-(exp(-(c/masa)*t)));
    return v;
  }


}OC;

int main (void)
{
  OC obj;
  obj.masa=68.1;
  obj.c=12.5;
  obj.gravedad=9.81;

  int t;
  printf("Tiempo(s)\t Velocidad(m/s)\t\n");

  for(t=0; ;t++)
  {
    printf("%i\t            %f\t\n",t,obj.EvaluarVel(t));

    if(obj.EvaluarVel(t+1) - obj.EvaluarVel(t) <=0.00001)
    {
      printf("\nEl equilibrio se logra en el segundo %i.\n",t+1);
      break;
    }
  }
}
