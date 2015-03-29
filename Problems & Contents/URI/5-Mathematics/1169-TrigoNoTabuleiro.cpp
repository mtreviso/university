#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

typedef long long unsigned int llu;


int main(){

	int n, x; 

	const llu res[65] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
	2, 5, 10, 21, 43, 87, 174, 349, 699, 1398, 2796, 5592, 11184, 22369,
	44739, 89478, 178956, 357913, 715827, 1431655, 2863311, 5726623, 11453246,
	22906492, 45812984, 91625968, 183251937, 366503875, 733007751, 1466015503,
	2932031007, 5864062014, 11728124029, 23456248059, 46912496118,
	93824992236, 187649984473, 375299968947, 750599937895, 1501199875790,
	3002399751580, 6004799503160, 12009599006321, 24019198012642,
	48038396025285, 96076792050570, 192153584101141, 384307168202282,
	768614336404564, 1537228672809129};

	scanf("%d", &n);
	while(n--){
		scanf("%d", &x);
		/*
		if(x == 64)
			res = 1537228672809129
		else
			(1 << x)/((llu) 12000);
		*/
		printf("%llu kg\n", res[x]);
	}


	return 0;
}