#include <stdio.h>
#include <stdlib.h>

//adreslerin artirilmasi ve cikarilmasi

int main() {
	
 //iki adres bilgisinin toplanmasi gecersiz bir islemdir ancak iki adres bilgisi bir birinden cikarilabilir ve sonuc bir tam sayidir.
    
    char s[10];
    int a[10];
    double d[10];
    
    printf("%d\n",&s[9]-&s[0]);  // sonuc =9 olacaktir.
    printf("%d\n",&a[9]-&a[0]);  // sonuc =9
    printf("%d\n",&d[9]-&d[0]);  // sonuc= 9
    //printf("%d ", &a[9]-&s[0]);     Bu islem gecersiz..

	return 0;
}
