// boj.kr/11758
// http://kks227.blog.me/220794097589

#include <stdio.h>

// a = (a1, a2, a3), b = (b1, b2, b3)
//			|a2 a3|	   |a1 a3|  |a1 a2|
// a x b = (|b2 b3|, - |b1 b3|, |b1 b2|) 
// 
// |a| = sqrt(a1*a1 + a2*a2 + a3*a3);

// since we assume z = 0,
// a x b = (0, 0, a1*b2 - a2*b1)
// Thus, |a x b| = sqrt((a1*b2 - a2*b1)^2) = a1*b2 - a2*b1

int cross(int x1, int y1, int x2, int y2)
{
	return x1*y2 - x2*y1;
}

int main()
{
	int i, x[3], y[3];
	int ccw;

	for(i=0; i<3; i++)
		scanf("%d%d", x+i, y+i);

	// ccw 판별 : 벡터의 외적(Cross Product), z 성분의 값은 0으로 두고 계산
	// |a x b| = |a||b|sin(theta)  
	// theta : 벡터 a 와 벡터 b 가 이루는 각도, 예각

	ccw = cross(x[1]-x[0], y[1]-y[0], x[2]-x[0], y[2]-y[0]);

	if(ccw > 0) puts("1"); 			// ccw (반시계반향)
	else if(ccw < 0) puts("-1"); 	// cw  (시계방향)
	else puts("0"); 				// 같은방향 or 반대방향
	return 0;
}
