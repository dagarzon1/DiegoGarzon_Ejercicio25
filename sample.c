#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
double gsf(double x, double mu, double s);

int main(int argc,char ** argv)
{
	srand(time(NULL));
	int N = atof(argv[1]);
	double mu = atof(argv[2]);
	double s = atof(argv[3]);
	double * gs = new double[N];
	int mn = mu - 4*s;
	int mx = mu + 4*s;
	gs[0]=0.1;

	for(int i=1;i<N;i++)
	{
		
		double t = double(rand()) / double(RAND_MAX) ;
		t = ( mx-mn ) * t + mn;
		double alfa = double( rand() ) / double(RAND_MAX);
		double gs_i = gs[i-1] +  t;
		double r = gsf(gs_i,mu,s) / gsf(gs[i-1],mu,s);
		if (alfa < r)
		{
			gs[i]=gs_i;
		}
		else
		{
			gs[i]=gs[i-1];
		}
		cout<<gs[i]<<endl;
	}

return 0;
}
double gsf(double x, double mu, double s)
{
	double pi = acos(-1);
	return 1.0/( s * sqrt(2 * pi) ) * exp( - ( x - mu ) * ( x - mu) / ( 2.0 * s * s ) );
	
}
