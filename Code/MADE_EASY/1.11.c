#include <stdio.h>

#define BYTE_TO_BINARY_PATTERN "Binary = %c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')


int main()
{
	char a = 7, b = 11;
	printf("a = %d, b = %d "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN "\n",a,b,BYTE_TO_BINARY(a),BYTE_TO_BINARY(b));
	printf("a & b = %d "BYTE_TO_BINARY_PATTERN"\n",a&b,BYTE_TO_BINARY(a&b));
	printf("a|b = %d "BYTE_TO_BINARY_PATTERN"\n",a|b,BYTE_TO_BINARY((a|b)));
	printf("a^b = %d "BYTE_TO_BINARY_PATTERN"\n",a^b,BYTE_TO_BINARY((a^b)));
	printf("~a = %d "BYTE_TO_BINARY_PATTERN"\n",(~a),BYTE_TO_BINARY((~a)));
	printf("a << 1 = %d "BYTE_TO_BINARY_PATTERN"\n",a<<1,BYTE_TO_BINARY((a<<1)));
	printf("b >> 1 = %d "BYTE_TO_BINARY_PATTERN"\n",b>>1,BYTE_TO_BINARY((b>>1)));
	int k = 3;
	printf("k << 6 = %d"BYTE_TO_BINARY_PATTERN"\n",(k<<6),BYTE_TO_BINARY(k<<6));
	return 0;
}
