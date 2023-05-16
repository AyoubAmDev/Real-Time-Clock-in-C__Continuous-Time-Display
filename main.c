#include <stdio.h>
#include <stdlib.h>
typedef struct {
int hr;
int min;
int sec;
} CLOCK;
void incr(CLOCK* K){
    K->sec++;
    if(K->sec==60){
        K->sec=0;
        if(K->min==60){
            K->hr++;
        }
    }
}
CLOK_sec_to_clock(int A){
CLOCK r;
r.hr=A/(60*60);
r.min=(A%(60*60))/60;
r.sec=A%60;
return r;
}

int CLOK_to_sec(CLOCK P) {
return (((P.hr*60)+(P.min))*60+P.sec);
}

void show(CLOCK*P){
printf("%s%d:%s%d:%s%d\n",
        (p->hr<10)?"0":"",P->hr,
       (P->min<10)?"0":"",P->min,
       (P->sec<10)?"0":"",P->sec);
CLOCK diff_to_clock(const CLOCK A , const CLOCK B) {
return (sec_to_clock(fabs(clock_to_sec(a)_clock_to_sec(b))));
}
}

int main()
{
    CLOCK C1, C2, C3;
    C1.sec=45 ;
    C1.min=28 ;
    C1.hr=4 ;
    show(&C1);
    C2
    return 0;
}
