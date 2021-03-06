// TestApp.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
//#include "../xmrstak/backend/cpu/crypto/cryptonight_aesni.h"
//#include "xmrstak/backend/cpu/crypto/cryptonight_aesni.h"

extern "C"
{
#include "c_groestl.h"
#include "c_blake256.h"
#include "c_jh.h"
#include "c_skein.h"
}

#pragma comment(lib, "xmr-stak-c.lib")
//#pragma comment(lib, "xmr-stak-backend.lib")



int main()
{
	blake256_hash(nullptr, nullptr, 0);
	printf("hello world.");

	char * string = "cabbage";
	char * source = "abc";
	int index;

	index = strspn(string, "abc");
	printf("The first %d characters of \"%s\" are found in \"%s\"\n",
		index, string, source);
	return 0;
}