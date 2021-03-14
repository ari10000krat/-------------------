#include <iostream>
using namespace std;
int main()
{
	int x1, y1, z1, w1, x, y, z, v, o, n, m;
	_asm {

		/*First task: x1 xor y1 and (z1 or x1) << 3, x1= 15, y1 = 221, z1 = 160*/

		/*z1 or x1*/
		mov eax, 160
		mov ecx, 15
		or eax,ecx
		mov x1,eax

		/*y1 and (z1 or x1)*/
		mov ebx, 221
		and ebx,x1
		mov y1,ebx

		/* x1 xor y1 and (z1 or x1)*/
		mov ecx, 15
		xor ecx,y1
		mov z1,ecx

		/*x1 xor y1 and (z1 or y1) <<<3*/
		rol ecx, 3
		mov w1, ecx


		/*SECOND TASK: v = x/y, o = mod(x,y), result = 10*y - (z + 1)*o +v, x = 247, Y = 27, z = 15

		v = x/y */
		mov eax, 247
		mov edx, 0
		mov ebx, 27
		mov ecx, 15
		div ebx
		mov v, eax
		mov o, edx

		/* 10*y */
		imul ebx, 10
		mov x, ebx

		/* (z+1) */
		inc ecx
		mov y, ecx

		/* (z+1)*o */
		imul ecx, edx
		mov z, ecx

		/* 10*y - (z + 1)*o */
		sub ebx, ecx
		mov m, ebx

		/* 10*y - (z + 1)*o + v*/
		add ebx, eax
		mov n, ebx
	}
	cout << "RESULT OF THE FIRST TASK: " << endl;
	cout << "TASK: x1 xor y1 and (z1 or y1) <<< 3" << endl;
	cout << "x1 = 15" << endl;
	cout << "y1 = 221" << endl;
	cout << "z1 = 160" << endl << endl;

	cout << "PROCESS:" << endl;
	cout << "(z1 or x1) = " << x1 << endl;
	cout << "y1 and (z1 or x1) = " << y1 << endl;
	cout << "x1 xor y1 and (z1 or y1) = " << z1 << endl;
	cout << "RESULT: x1 xor y1 and (z1 or y1) <<<3 = " << w1 << endl;
	cout << "RESULT = " << w1 << endl;
	cout << endl;

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl<<endl;

	cout << "RESULT OF THE SECOND TASK: " << endl;
	cout << "TASK: Celoe chislo = x/y, Ostatok = mod(x,y)" << endl;
	cout << "Result = 10*y - (z+1)*o + v" << endl;
	cout << "x = 247" << endl;
	cout << "y = 27" << endl;
	cout << "z = 15" << endl << endl;

	cout << "PROCESS:" << endl;
	cout << "Celoe chislo = x/y (integer) = "<<v << endl;
	cout << "Ostatok = mod(x,y)(remain) = "<<o << endl;
	cout << "10 * y = "<<x << endl;
	cout << "z + 1 = "<<y << endl;
	cout << "(z + 1)*o = "<<z << endl;
	cout << "10*y - (z + 1)*o = " <<m << endl;

	cout << "10*y - (z + 1)*o +v = "<<n << endl;
	cout << "RESULT = "<<n << endl;

}

