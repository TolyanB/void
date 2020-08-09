#include<stdio.h>
const void* getMax(const void* const x1, const void* const x2, char const type);
int main()
{

}

const void* getMax(const void* const x1, const void* const x2, char const type)
{
	const void* result = NULL;
	switch (type)
	{
	case 'd': result = *((double*)x1) > *((double*)x2) ? x1 : x2;
		break;
	case 'i': result = *((int*)x1) > *((int*)x2) ? x1 : x2;
		break;
	case 'u': result = *((unsigned*)x1) > *((unsigned*)x2) ? x1 : x2;
		break;
	case 'c': result = *((char*)x1) > *((char*)x2) ? x1 : x2;
		break;
	}

	return result;
}
