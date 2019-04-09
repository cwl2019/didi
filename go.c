#include <io.h>

int bingo(int c,int x);

int bingo(int x,int y){
  return (x>>4 && y << 2);
}
