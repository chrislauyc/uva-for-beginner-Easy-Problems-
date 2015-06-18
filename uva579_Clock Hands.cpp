#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <math.h>

using namespace std;

int main()
{
    freopen("input.txt", "r",stdin);
    int m, h;
    double t;
    while ( scanf("%d:%d", &h, &m)==2 ) {
        if (!h&&!m) break;
        t = abs( 0.5 * (60*h - 11*m) );
        t = min(t, 360.0-t);
        printf("%.3lf\n",t);
    }
    return 0;
}
