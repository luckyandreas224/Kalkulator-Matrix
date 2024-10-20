#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<unistd.h>

#define MAX 5
#define CYAN "\033[0;36m"
#define RED "\x1b[31m"
#define RESET "\x1b[0m"
#define GREEN"\033[0;32m"

void INPUT(int matrix[MAX][MAX], int ordo){
    printf("|1  2| jadi [1 2 3 4]");
    printf("                                                                                                   |3  4|");
    printf("\n\n|1  2  3| jadi [1 2 3 4 5 6 7 8 9]");
    printf("                                                                                      |4  5  6|        ");
    printf("                                                                                                       |7  8  9|");
    printf("\nMasukkan elemenya sesuai contoh di atas :) : ");
    for(int i=0;i<ordo;i++){
        for(int j=0;j<ordo;j++){
            scanf("%d", &matrix[i][j]);puts("");
        }
    }
}



void PRINT(int matrix[MAX][MAX], int ordo){
    for(int i=0;i<ordo;i++){
        for(int j=0;j<ordo;j++){
        	if(j>0)printf(" ");printf("%d", matrix[i][j]);
        }puts("");
    }
}


void TAMBAH(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int HASIL[MAX][MAX], int ordo){
    for(int i = 0;i<ordo;i++){
        for(int j=0;j<ordo; j++){
            HASIL[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }}


void KURANG(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int HASIL[MAX][MAX], int ordo){
    for(int i = 0; i<ordo;i++){
        for(int j = 0; j<ordo;j++){
           HASIL[i][j]=matrix1[i][j]-matrix2[i][j];
    }}
}


void KALI(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int HASIL[MAX][MAX], int ordo){
    for(int i = 0;i<ordo;i++){
        for(int j = 0;j<ordo;j++){
            HASIL[i][j]=0;
            for(int k = 0;k<ordo;k++){
                HASIL[i][j]+=matrix1[i][k]*matrix2[k][j];
    }
        }
    }
}

void TRANSPOSE(int matrix[MAX][MAX], int HASIL[MAX][MAX], int ordo){
    for(int i = 0; i<ordo;i++){
        for(int j = 0;j<ordo;j++){
            HASIL[j][i]=matrix[i][j];
        }
    }
}


void MENU(int command){
    const char *options[]={"Penjumlahan", "Penjumlahan", "Perkalian", "Transpose", "Exit"};
printf("Pilih operasi yang diinginkan untuk 2 buah matrix ");
printf(CYAN ":3 " RESET);puts(":");
    for(int i=0;i<5;i++){
        if(i == command){
            printf(RED"%s	<<< \n" RESET, options[i]);
        }
		else{
            printf("%s\n", options[i]);
        }
    }
}

void MENU1(int command1){
    const char *options[]={"Penjumlahan", "Penjumlahan", "Perkalian", "Transpose", "Exit"};
printf("Pilih operasi yang diinginkan untuk 3 buah matrix ");
printf(CYAN ":3 " RESET);puts(":");
    for(int i=0;i<5;i++){
        if(i == command1){
            printf(RED"%s	<<< \n" RESET, options[i]);
        }
		else{
            printf("%s\n", options[i]);
        }
    }
}


void UNIQUE(){
	system("cls");
    const char *art[] ={
        "@@@@@@@@@@@@@@@@@@@@@@@@@@@#%?*+++**??%?+;;;;;;;+++++++++++*?%#@@@@@@@@@@@@@@@@@@@@@@@@@@@\n",
        "@@@@@@@@@@@@@@@@@@@@@@@@#%*+++*?%S#####S;yy+*?%SSS#######S%?*+++*%#@@@@@@@@@@@@@@@@@@@@@@@\n",
        "@@@@@@@@@@@@@@@@@@@@@S?*+*?%S##########*:y?S###################S%?*++?S@@@@@@@@@@@@@@@@@@@\n",
        "@@@@@@@@@@@@@@@@@@S?+yy:+?%############**S##############%S#########S%*++?S@@@@@@@@@@@@@@@@\n",
        "@@@@@@@@@@@@@@@%*++*???**+*?%S####%S##S###############S%##SS#########S%*+*%@@@@@@@@@@@@@@@\n",
        "@@@@@@@@@@@@@%++*S#########SSSS###SS##################SSS?*#############S*++%@@@@@@@@@@@@@\n",
        "@@@@@@@@@@@%++?S#####################################S%?+*S###############S?++%@@@@@@@@@@@\n",
        "@@@@@@@@@S*;*S######################################%*;;?##S################S*;*S@@@@@@@@@\n",
        "@@@@@@@@?++%################yyy##################S?+;;+%#S%###################%++?@@@@@@@@\n",
        "@@@@@@#*;*#################################SS%?*+;;;*%##%%#####################S*;*#@@@@@@\n",
        "@@@@@S++%#SS##########k#############SS%?**++;;;;+*?S##%?%########################?++S@@@@@\n",
        "@@@@S+;yy*?S####k####kk#####SS%?**++;;;;;;;++*?%S##S%*+%##########################%++S@@@@\n",
        "@@@S+;;+%######kk###kkk#S%*++;;;;;;;;;++**?%SS##SSSSSSSS%##########################%++S@@@\n",
        "@@#*;+%########kkSkkS##?+;;;;;;;;;;++*?%SS##SSSSSSSS%##############################%++#@@@\n",
        "@@?;*#########Skyk%##S+;;;;;;:;;++*%SS#############S###########################S%kk%kk+?@@\n",
        "@S++S#########%yk?##S+;+;;;::;++?%SS##############################################S*k;++S@\n",
        "@*;?##########?yk###*;++;:::;++?%%S#################################################%k+*@\n",
        "S++S##########yy%##S+;+;::::+;*%S###########S%%?*******?%%?**?SS%S###################S+++S\n",
        "?+*###########%y%##%;++;::,:;;+S##########%*+;;;;;;;;;;;;;+*++;++%####################%;+?\n",
        "*;?###########Skk##S;++;::,:;++S%S####SSS*;++++++++;;;;;:::;;++;;+?####################*+*\n",
        "+;%############ykS##+;+;::,::;;+%??S##S#SSS%%%%%?????*+;;;:,,:;;;;;?##kS###############%++\n",
        "+;%#############Sk##?;;;;;:,,:;;+*???%%SS#########S%????+;;::,::;+;;%##kk##############%++\n",
        "+;%##############SS##?;;;;;;:,::;;;+***?????????S#S##S??%++;::,::;+;*##SkS#############%++\n",
        "*;?###################?+;;+++;;;;;;;;;;;;;;;;;+%#SS####SS%;+;:,::;+;+###kk#############?+*\n",
        "?++S###################?**++***++;;;;;;;;;++?%###########S++;:,::;+;+###kkS############*+?\n",
        "S+;*##################%%###S%?%SS%%%??%%%SS#############S%++;:::;++;*###kkS###########S++S\n",
        "@*+;y################################################SS%?*+;:::;;+;+S##%ykS#####yy+y##?+*@\n",
        "@S+;;yS######################yy######################S%?++;::;;;+;;*##SkykS#######;:*%++S@\n",
        "@@?++yyyS###########################SS#####SS#####S%?*++;;:;;;;;;+%#Skyyk?########?;+++?@@\n",
        "@@#*+++yyy%########################%%S%%%SS###S%%?*++;;;;;;;;;;+?S#kyy#ykk#########*;++#@@\n",
        "@@@S++%##########################S**?%SS##S%??*++;;;;;;;;++**?S###yk###yk#########*;++#@@@\n",
        "@@@@S++%########################S**%###S?*++;;;;;;++**?%%S##############k########S+++S@@@@\n",
        "@@@@@S+;?######################S?%##S?++;;;+**?%%S###############################*;+S@@@@@\n",
        "@@@@@@#*;*S###################S%#S?*;;;+?%S###############yyy##################S*;*#@@@@@@\n",
        "@@@@@@@?++%#################SS#S*;;*%########################################%++?@@@@@@@@@\n",
        "@@@@@@@@S*;*S#################%;+*%########################################S*;*S@@@@@@@@@@\n",
        "@@@@@@@@@@%++?S##############?+?%S###########################y##########S%*++%@@@@@@@@@@@@\n",
        "@@@@@@@@@@@@%++*S###########%?SS%S##################S########yy?yy++++*++;+%@@@@@@@@@@@@@@\n",
        "@@@@@@@@@@@@@@%*+*%S###########%%###################yy###########yy?*+;+*%@@@@@@@@@@@@@@@@\n",
        "@@@@@@@@@@@@@@@@@S?++*%S########SS##############S#####S###########y*++?S@@@@@@@@@@@@@@@@@@\n",
        "@@@@@@@@@@@@@@@@@@@@S?++*?%S##################S*+#############y?*++?S@@@@@@@@@@@@@@@@@@@@@\n",
        "@@@@@@@@@@@@@@@@@@@@@@@#%*+++*?%S#########S%?+::?########yy?*+++*%#@@@@@@@@@@@@@@@@@@@@@@@\n",
        "@@@@@@@@@@@@@@@@@@@@@@@@@@@@#%?*+++******+++;;;+?y%???**+++*?%#@@@@@@@@@@@@@@@@@@@@@@@@@@@\n",
        "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#SS%?***++++++++++***?%SS#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
    };

    for(int i = 0;i<sizeof(art)/sizeof(art[0]);i++){
        printf("%s", art[i]);
        fflush(stdout);
        sleep(1); 
    }
}



int main(){
    int jumlahmatrix,ordomatrix,operation,command=0,command1=0;
    int matrix1[MAX][MAX],matrix2[MAX][MAX],matrix3[MAX][MAX],HASIL[MAX][MAX],temp[MAX][MAX];

    char key,key1;
    haihai:
    system("cls");
    do{
        printf("Berapa jumlah Matrix yang kamu mau? [2 atau 3] (unique command type '69'): ");
        scanf("%d", &jumlahmatrix);
        if(jumlahmatrix < 2 || jumlahmatrix > 3)puts("Input yang bener woei\n");
        if(jumlahmatrix == 69) goto woi;
    }while(jumlahmatrix < 2 || jumlahmatrix > 3 );

	while(jumlahmatrix==2){
    do{
        printf("Ordo nya berapa ? [2] = [2 x 2], [3] = [3 x 3], [4] = [4 x 4] [MAX 5 YA :P ]  : ");
        scanf("%d", &ordomatrix);
        if (ordomatrix < 2 || ordomatrix > 5)puts("Input yang bener woei\n");
    }while(ordomatrix < 2 || ordomatrix > 5);

 while(ordomatrix > 2 || ordomatrix < 4){
 	system("cls");
 	MENU(command);
 	key = getch();
 	if(key == 'w' || key == 'W' && command > 0)command--;
 	else if(key == 's' || key == 'S' && command > 0)command++;
	else if(key =='\r'){
		switch(command){
			case 0:
    puts("Input matrix pertama:");
    INPUT(matrix1, ordomatrix);
    puts("Input matrix kedua:");
    INPUT(matrix2, ordomatrix);
	puts("Hasil penjumlahan matrix pertama dan kedua:");
	TAMBAH(matrix1, matrix2, HASIL, ordomatrix);
	PRINT(HASIL, ordomatrix);
	getch();
	break;
			case 1:
    puts("Input matrix pertama:");
    INPUT(matrix1, ordomatrix);
    puts("Input matrix kedua:");
    INPUT(matrix2, ordomatrix);
	puts("Hasil penjumlahan matrix pertama dan kedua:");
	KURANG(matrix1, matrix2, HASIL, ordomatrix);
	PRINT(HASIL, ordomatrix);
	getch();
	break;
			case 2:
    puts("Input matrix pertama:");
    INPUT(matrix1, ordomatrix);
    puts("Input matrix kedua:");
    INPUT(matrix2, ordomatrix);
	puts("Hasil penjumlahan matrix pertama dan kedua:");
	KALI(matrix1, matrix2, HASIL, ordomatrix);
	PRINT(HASIL, ordomatrix);
	getch();
	break;
			case 3:
	puts("Input matrix yang ingin ditranspose:");
    INPUT(matrix1, ordomatrix);
    puts("Hasil transpose matrix:");
    TRANSPOSE(matrix1, HASIL, ordomatrix);
    PRINT(HASIL, ordomatrix);
    getch();
    break;
    		case 4:
       		goto haihai;
			
			
	}}}}
	
	while(jumlahmatrix == 3){
		do{
        printf("Ordo nya berapa ? [2] = [2 x 2], [3] = [3 x 3], [4] = [4 x 4] [MAX 5 YA :P ]  : ");
        scanf("%d", &ordomatrix);
        if (ordomatrix < 2 || ordomatrix > 5)puts("Input yang bener woei\n");
    }while(ordomatrix < 2 || ordomatrix > 5);

 while(ordomatrix > 2 || ordomatrix < 4){
 	system("cls");
 	MENU1(command1);
 	key1 = getch();
 	if(key1 == 'w' || key1 == 'W' && command1 > 0)command1--;
 	else if(key1 == 's' || key1 == 'S' && command1 > 0)command1++;
	else if(key1 =='\r'){
		switch(command1){
			case 0:
    puts("Input matrix pertama:");
    INPUT(matrix1, ordomatrix);
    puts("Input matrix kedua:");
    INPUT(matrix2, ordomatrix);
    puts("Input matrix ketiga:");
    INPUT(matrix3, ordomatrix);
    puts("Hasil penjumlahan matrix 1, 2 dan 3:");
    TAMBAH(matrix1, matrix2, temp, ordomatrix);
    TAMBAH(temp, matrix3, HASIL, ordomatrix);
    PRINT(HASIL, ordomatrix);
    getch();
    break;
			case 1:
    puts("Input matrix pertama:");
    INPUT(matrix1, ordomatrix);
    puts("Input matrix kedua:");
    INPUT(matrix2, ordomatrix);
    puts("Input matrix ketiga:");
    INPUT(matrix3, ordomatrix);
    puts("Hasil penjumlahan matrix 1, 2 dan 3:");
    KURANG(matrix1, matrix2, temp, ordomatrix);
    KURANG(temp, matrix3, HASIL, ordomatrix);
    PRINT(HASIL, ordomatrix);
    getch();
	break;
			case 2:
    puts("Input matrix pertama:");
    INPUT(matrix1, ordomatrix);
    puts("Input matrix kedua:");
    INPUT(matrix2, ordomatrix);
    puts("Input matrix ketiga:");
    INPUT(matrix3, ordomatrix);
    puts("Hasil penjumlahan matrix 1, 2 dan 3:");
    KALI(matrix1, matrix2, temp, ordomatrix);
    KALI(temp, matrix3, HASIL, ordomatrix);
    PRINT(HASIL, ordomatrix);
	getch();
	break;
			case 3:
	puts("Input matrix yang ingin ditranspose:");
    INPUT(matrix1, ordomatrix);
    puts("Hasil transpose matrix:");
    TRANSPOSE(matrix1, HASIL, ordomatrix);
    PRINT(HASIL, ordomatrix);
    getch();
    break;
    		case 4:
       		goto haihai;
			}}}}
			
	while(jumlahmatrix == 69){
		woi:
		UNIQUE();
		getch();
		goto haihai;
	}		
			
			
return 0;
}


