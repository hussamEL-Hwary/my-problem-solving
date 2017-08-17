//============================================================================
// Name        :Equivalent Strings
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/559/B
//============================================================================

#include<bits/stdc++.h>
#include<complex>
#include<math.h>
#include<algorithm>
using namespace std;

typedef complex<double>point;
#define mp make_pair 
#define fi first
#define se second
#define X real()
#define Y imge()
#define polar(r,t)    ((r)*exp(point(0,(t))))
#define length(a)     hypot((a).X,(a).Y)
#define angle(a)      atan2((a).Y,(a).X)
#define vec(a,b)      ((b)-(a))
#define dot(a,b)      ((conj(a)*(b)).real())
#define cross(a,b)    ((conj(a)*(b)).imag())
#define lengthsqr(a)  dot(a,a)
#define rotate(v,t)   ((v)*exp(point(0,t)))
#define rotateabout(v,t,a) (rotate(vec(a,v),t)+(a))
#define reflect(v,m)  (conj((v)/(m))*(m))
#define PI 3.1415926535897932384626
#define INF                         (int)1e9
#define EPS                         1e-9


bool pointOnRay(const point &a, const point &b, const point &p)
{
	return fabs(cross(vec(a, b), vec(a, p)))< EPS &&
		dot(vec(a, b), vec(a, p))> -EPS;
}

bool pointonline(const point &a, const point &b, const point &p)
{
	return fabs(cross(vec(a, b), vec(a, p))) < EPS;

}

bool pointOnsegment(const point &a, const point &b, const point &p)
{
	if (lengthsqr(vec(a, b)) < EPS) return lengthsqr(vec(a, p)) < EPS;

	return pointOnRay(a, b, p) && pointOnRay(b, a, p);
}

bool intersect(const point &a, const point &b, const point &p, const point &q, point &ret)
{
	double d1 = cross(p - a, b - a);
	double d2 = cross(q - a, b - a);
	ret = (d1 / q - d2*p) / (d1 - d2);
	return fabs(d1 - d2)>EPS;
}


string divide(string in)
{
	if (in.size() % 2) return in;
	string a = divide(in.substr(0, in.size() / 2));
	string b = divide(in.substr(in.size() / 2));
	return min(a + b, b + a);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string inp1, inp2;
	cin >> inp1 >> inp2;
    
	if (divide(inp1) == divide(inp2))
		cout << "YES\n";
	else
	cout << "NO\n";


	return 0;
}