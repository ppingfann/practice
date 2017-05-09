#include<stdio.h>
#define MONTHS 12
#define YEARS 5

int main()
{
  float rain[YEARS][MONTHS] = {
  {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
  {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
  {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
  {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
  {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
  };
  void year_tot(float (*rain)[MONTHS],int rows);
  void month_tot(float (*rain)[MONTHS],int rows);
  
  year_tot(rain,YEARS);
  month_tot(rain,YEARS);
}

void year_tot(float (*rain)[MONTHS],int rows)
{
  int i,j;
  float total=0;
  float tot=0;
  printf("YEAR   RAINFALL(inches)\n");
  for(i=0;i<rows;i++){
    for(j=0;j<MONTHS;j++)
      total+=rain[i][j];
    printf("%5d  %5.1f\n",2000+i,total);
    tot+=total;
    total=0;
    }
  printf("\nThe yearly average is %.1f inches.\n\n",tot/YEARS);
}

void month_tot(float (*rain)[MONTHS],int rows)
{
  int i,j;
  float total=0;
  printf("MONTHLY AVERAGES:\n\n");
  printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
  for(i=0;i<MONTHS;i++){
    for(j=0;j<rows;j++)
      total+=rain[j][i];
    printf("%.1f ",total/rows);
    total=0;
    }
  putchar('\n');
}

  

  

