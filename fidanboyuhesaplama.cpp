#include <stdio.h>

int main()
{
    int sayac=0, x=0, fidan=0;
    int gun;
    printf("kacinci gundeki fidanin boyunu ogrenmek istersiniz : ");
    scanf("%d" ,&gun);
    
    for (sayac=1; sayac<=gun; sayac++){
        if(gun<5){
            x=x+10;
        }
        else if(gun<10){
            if(sayac<5){
                x=x+10;
            }
            else if(sayac>=5 && sayac<10)
            x=x+5;
        }
        else if(gun>=10){
            if(sayac<5){
                x=x+10;
            }
            else if(sayac>=5 && sayac<10){
            x=x+5;
            }
            else if(sayac>=10)
            x=x+10/8;
            
        }
    }
    
    printf("%d. Gun fidanin boyu : %d cm", gun, x );

    return 0;
}
