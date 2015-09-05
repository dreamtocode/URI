#include <iostream>
 
int main(){
     
 int d, dt, h, ht, m, mt, s, st;
  
 scanf("Dia %d", &d);
 scanf("%d : %d : %d\n", &h, &m, &s);
 scanf("Dia %d", &dt);
 scanf("%d : %d : %d", &ht, &mt, &st);
  
 s = st - s;
 m = mt - m;
 h = ht - h;
 d = dt - d;
  
if (s < 0){
 s += 60;
 m--;
 }
  
 if (m < 0){
 m += 60;
 h--;
 }
  
if (h < 0){
 h += 24;
 d--;
 }
  
 printf("%d dia(s)\n", d);
 printf("%d hora(s)\n", h);
 printf("%d minuto(s)\n", m);
 printf("%d segundo(s)\n", s);
}
