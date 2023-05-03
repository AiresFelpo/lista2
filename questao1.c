#include<stdio.h>
main(){
float tmedio;
int tempo,mt=-1,st=0, melhorvolta,i;
for(i=0;i<10;i++)
printf("\ndigite o tempo obtido na %d volta em minutos: ",i);
scanf("%d",&tempo);
if( tempo > mt)
{
mt=tempo;
melhorvolta=i;
}
st=st+tempo;
}
tmedio=st/10;
printf("\no melhor tempo foi %d.\n ",mt);
printf("\na volta q ocorreu o melhor tempo foi %d volta.\n ",melhorvolta);
printf("\ntempo medio das 10 voltas: %f\n ",tmedio);
system("pause");
}
}