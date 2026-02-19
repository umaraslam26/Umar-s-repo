#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	int es, a, b, c, d, i=0;
	float area, circonferenza, raggio, base, altezza, tempf, tempc, base2, altezza2;
	for (;0<2;){
		es=0;a=0;b=0;c=0;d=0;i=0;area=0;circonferenza=0;raggio=0;base=0;altezza=0;tempf=0;tempc=0;altezza2=0;base2=0;
		printf("Esercizio 1: Somma, differenza e prodotto\nEsercizio 2: Quoziente e resto\nEsercizio 3: Somma combinata\nEsercizio 4: Scambio di due numeri\nEsercizio 5: Rotazione tre numeri\nEsercizio 6: Rotazione complessa quattro numeri\nEsercizio 7: Area e circonferenza del cerchio\nEsercizio 8: Area e perimetro del rettangolo\nEsercizio 9: Area e perimetro del triangolo rettangolo\nEsercizio 10: Conversione Fahrenheit in Celsius\nEsercizio 11:Calcolatrice Geometrica\nEsercizio 12: Conversione Valute");
		printf("\n\n numero esercizio (Da 1 a 12): ");
		scanf("%d",&es);
		switch (es){
			case 1:
				printf (" (Metti le virgole tra i numeri)A, B, C: ");
				scanf("%d,%d,%d",&a,&b,&c);
				printf(" Somma= %d",a+b+c);
				break;
			case 2:
				printf (" (Metti le virgole tra i numeri)A, B: ");
				scanf("%d,%d",&a,&b);
				printf(" Quoziente intero: %d", a/b);
				break;
			case 3:
				printf (" (Metti le virgole tra i numeri)A, B, C, D: ");
				scanf("%d,%d,%d,%d",&a,&b,&c,&d);
				printf(" Risultato: %d",a+b+c*d);
				break;
			case 4:
				printf (" (Metti le virgole tra i numeri)A, B: ");
				scanf("%d,%d",&a,&b);
				a=b+a;b=a-b;a=a-b;
				printf("Num1: %d\nNum2: %d",a,b);
				break;
			case 5:
				printf (" (Metti le virgole tra i numeri)A, B, C: ");
				scanf("%d,%d,%d",&a,&b,&c);
				c=a+b+c;b=c-b-a;a=c-b-a;c=c-a-b;
				printf("Num1: %d\nNum2: %d\nNum3: %d",a,b,c);
				break;
			case 6:
				printf (" (Metti le virgole tra i numeri)A, B, C, D: ");
				scanf("%d,%d,%d,%d",&a,&b,&c,&d);
				d=a+b+c+d;b=d-a-b-c;c=d-a-b-c;a=d-c-b-a;d=d-b-c-a;
				printf("Num1: %d\nNum2: %d\nNum3: %d\nNum4: %d",a,b,c,d);
				break;
			case 7:
				printf(" Raggio cerchio: ");
				scanf("%f",&raggio);
				area=raggio*raggio*3.14159;
				circonferenza=raggio*2*3.14159;
				printf("Area: %.2f\nCirconferenza: %.2f",area,circonferenza);
				break;
			case 8:
				printf(" Base: ");
				scanf("%f",&base);
				printf(" altezza: ");
				scanf("%f",&altezza);
				printf(" Area: %.2f\n Perimetro: %.2f",base*altezza,base*2+altezza*2);
				break;
			case 9:
				printf(" Base: ");
				scanf("%f",&base);
				printf(" altezza: ");
				scanf("%f",&altezza);
				printf(" Area: %.2f\n Perimetro: %.2f",(base*altezza)/2,base+altezza+sqrt(base*base+altezza*altezza));
				break;
			case 10:
				printf(" Temperatura in gradi F: ");
				scanf("%f",&tempf);
				tempc=(tempf-32)*0.55555555555555555555555555555555555555555555556;
				printf(" Temperatura in gradi C: %.2f",tempc);
				break;
			case 11:
				printf(" Raggio cerchio: ");
				scanf("%f",&raggio);
				printf(" Base rettangolo: ");
				scanf("%f",&base);
				printf(" Altezza rettangolo: ");
				scanf("%f",&altezza);
				printf(" Base triangolo rettangolo: ");
				scanf("%f",&base2);
				printf(" Altezza triangolo rettangolo: ");
				scanf("%f",&altezza2);
				area=raggio*raggio*3.14159;
				circonferenza=raggio*2*3.14159;
				printf("\nArea cerchio: %.2f\nCirconferenza: %.2f\n\nArea rettangolo: %.2f\nPerimetro rettangolo: %.2f\n\nArea triangolo rettangolo: %.2f\nPerimetro triangolo rettangolo: %.2f",area,circonferenza,base*altezza,base*2+altezza*2,(base2*altezza2)/2,base2+altezza2+sqrt(base2*base2+altezza2*altezza2));
				break;
			case 12:
				printf("Euro: ");
				scanf("%f",&area);
				printf("USD: %.2f\nGBP: %.2f\nJPY: %.2f",area*1.17, area*0.87, area*184.47);
				break;
			default:
				for (;0<1;){
					printf("67");
				}
		}
		printf ("\n\n Vuoi scegliere un'altro esercizio? (Se si' scrivi 1): ");
		scanf("%d",&i);
		if (i!=1){
			break;
		}
	}
	
	
getch();
return 0;
}