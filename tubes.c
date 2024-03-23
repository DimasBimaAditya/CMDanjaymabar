#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data{
        char uname[20],pass[20];
}data;

int attemp = 3;

//ADMIN
void admin();
void regisadmin();
void loginadmin();
void lihatcustomer();
void hapuscustomer();
void listjasa();
void feedback();

//CUSTOMER

//regis admin
void regisadmin(){

}

//login admin
void loginadmin(){
    system("cls");
    int x=0;
    printf("\tLOGIN ADMIN\n");
    printf("Masukkan Username: ");
    gets(data.uname);
    printf("Masukkan Password : ");
    gets(data.pass);
    if (strcmp(data.uname,"admin")==0 && strcmp(data.pass,"123")==0){
     x=1;
     attemp=0;
     printf("\tLOGIN BERHASIL\n");
     admin();

    }
    if(x==0 && attemp>0){
     loginadmin(attemp-1);
     printf("Kesempatan anda tersisa %d\n", attemp);

    }

}
// menu admin
void admin(){
    int x;
    printf("\tSELAMAT DATANG ADMIN\n");
    printf("silahkan pilih menu : \n");
    printf("\t1.Lihat Daftar Customer\n");
    printf("\t2.Hapus Customer\n");
    printf("\t3.List Jasa\n");
    printf("\t4.Lihat Feedback\n");

        switch (x)
    {
    case 1:
        lihatcustomer();
        break;
    case 2:
        hapuscustomer();
        break;
    case 3:
        listjasa();
        break;
    case 4:
        feedback();
        break;
    
    default:
        printf("Pilihan tidak ada!!!!!!!!!!!!\n"); system("pause");
        break;
    }

}
//lihat daftar customer
void lihatcustomer(){

}
//hapus akun customer
void hapuscustomer(){

}
//lihat jasa yang tersedia
void listjasa(){

}
//lihatfeedback
void feedback(){

}


//CUSTOMER


void regis(){
    system("cls");
    int x;
    printf("\tSELAMAT DATANG DI MENU REGISTRASI\n");
    printf("Silahkan pilih :\n");
    printf("1.ADMIN\n");
    printf("2.CUSTOMER\n");
    scanf("%d", &x);fflush(stdin);
     switch (x)
    {
    case 1:
        regisadmin();
        break;
    case 2:
        
        break;
    
    default:
        printf("Pilihan tidak ada!!!!!!!!!!!!\n"); system("pause");
        break;
    }

    }

void login(){
     int x;
    system("cls");
    printf("\tMENU LOGIN\n");
    printf("||\t1. ADMIN\t||");
    printf("\t2. CUSTOMER\t||\n> ");

    scanf("%d", &x);fflush(stdin);

    switch (x)
    {
    case 1:
        loginadmin();
        break;
    case 2:
        login();
        break;
    
    default:
        printf("Pilihan tidak ada!!!!!!!!!!!!\n"); system("pause");
        break;
    }

    }

int main(){

    int opsi;
    system("cls");
    printf("#################################################");
    printf("\n#            D ' F R A M E C R A F T            #\n");
    printf("#################################################\n\n");

    printf("||\t1. Registrasi\t||");
    printf("\t2. Login\t||\n> ");

    scanf("%d", &opsi);fflush(stdin);

    switch (opsi)
    {
    case 1:
        regis();
        break;
    case 2:
        login();
        break;
    
    default:
        printf("Pilihan tidak ada!!!!!!!!!!!!\n"); system("pause");
        main();
        break;
    }
    
}
