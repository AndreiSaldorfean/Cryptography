#include <openssl/rand.h>

int main(){
  unsigned char buf[4];
  RAND_bytes(buf,sizeof(buf));
  printf("%b\n",*(buf));
  printf("%b\n",*(buf+1));
  printf("%b\n",*(buf+2));
  printf("%b\n",*(buf+3));
  return 0;
}
