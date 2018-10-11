#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void kiir (double tomb[], int db);
double tavolsag(double pagerank[], double pagerank_temp[], int db);

int main(void)
{
	double L[4][4] =
  {
		{0.0, 0.0, 1.0 / 3.0, 0.0},
		{1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
		{0.0, 1.0 / 2.0, 0.0, 0.0},
		{0.0, 0.0, 1.0 / 3.0, 0.0}
	};

	double PR[4] = {0.0, 0.0, 0.0, 0.0};
	double PRv[4] = {1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0};

	for (;;) {
		for(int i=0; i<4; i++)
    {
			PR[i] = PRv[i];
		}

		for (int i=0; i<4; i++)
    {
			double temp = 0.0;

			for (int j=0; j<4; j++)
      {
				temp += L[i][j] * PR[j];
				PRv[i] = temp;
			}
		}

		if(tavolsag(PR, PRv, 4) < 0.000001)
    {
			break;
		}
	}

	kiir(PR, 4);

	return 0;
}

void kiir (double tomb[], int db)
{ for (int i=0; i<db; i++) {
		printf("PageRank [%d]: %lf\n", i, tomb[i]);
	}
}

double tavolsag(double pagerank[], double pagerank_temp[], int db)
{
	double dist = 0.0;

	for(int i=0; i<db; i++)
  {
		dist += (pagerank[i] - pagerank_temp[i]) * (pagerank[i] - pagerank_temp[i]);
	}

	return sqrt(dist);
}
