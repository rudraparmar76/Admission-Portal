#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

// define for integrated
#define MAX_SEATS_Intg_fiit 180
#define SEATS_FILE_Intg_fiit "seats_integrated_fiit.txt" // defined a macro seats_file with the value seats.txt

/*By defining macro we can easily change the name of the file only by changing it in definition of seats_file*/

// define for intg allen
#define MAX_SEATS_Intg_allen 180
#define SEATS_FILE_Intg_allen "seats_integrated_allen.txt"

// define for intg pw
#define MAX_SEATS_Intg_pw 180
#define SEATS_FILE_Intg_pw "seats_integrated_pw.txt"

// define for unacadmey
#define MAX_SEATS_Intg_unacademy 180
#define SEATS_FILE_Intg_unacademy "seats_integrated_unacademy.txt"

// define for nurutre
#define MAX_SEATS_Intg_nurture 180
#define SEATS_FILE_Intg_nurture "seats_integrated_nurture.txt"

// define for diploma for bhagubhai comp
#define MAX_SEATS_Diplo_bhagubhaiC 120
#define SEATS_FILE_Diplo_bhagubhaiC "seats_diploma_BC.txt"

// define for diploma for thakur comp
#define MAX_SEATS_Diplo_TC 120
#define SEATS_FILE_Diplo_TC "seats_diploma_TC.txt"

// define for diploma for govt comp
#define MAX_SEATS_Diplo_GC 120
#define SEATS_FILE_Diplo_GC "seats_diploma_GC.txt"

// define for diploma for spit comp
#define MAX_SEATS_Diplo_SC 120
#define SEATS_FILE_Diplo_SC "seats_diploma_SC.txt"

// define for diploma for kj comp
#define MAX_SEATS_Diplo_KC 120
#define SEATS_FILE_Diplo_KC "seats_diploma_KC.txt"

// define for diploma for bhagubhai it
#define MAX_SEATS_Diplo_bhagubhaiT 120
#define SEATS_FILE_Diplo_bhagubhaiT "seats_diploma_BT.txt"

// define for diploma for thakur it
#define MAX_SEATS_Diplo_TIT 120
#define SEATS_FILE_Diplo_TIT "seats_diploma_TIT.txt"

// define for diploma for govt it
#define MAX_SEATS_Diplo_GIT 120
#define SEATS_FILE_Diplo_GIT "seats_diploma_GIT.txt"

// define for diploma for spit it
#define MAX_SEATS_Diplo_SIT 120
#define SEATS_FILE_DIPLO_SIT "seats_diploma_SIT.txt"

// define for diploma for kj it
#define MAX_SEATS_Diplo_KIT 120
#define SEATS_FILE_Diplo_KIT "seats_diploma_KIT.txt"

// define for diploma for bhagubhai elec
#define MAX_SEATS_Diplo_bhagubhaiE 120
#define SEATS_FILE_Diplo_bhagubhaiE "seats_diploma_E.txt"

// define for diploma for thakur elec
#define MAX_SEATS_Diplo_TE 120
#define SEATS_FILE_Diplo_TE "seats_diploma_TE.txt"

// define for diploma for govt elec
#define MAX_SEATS_Diplo_GE 120
#define SEATS_FILE_Diplo_GE "seats_diploma_GE.txt"

// define for diploma for spit elec
#define MAX_SEATS_Diplo_SE 120
#define SEATS_FILE_Diplo_SE "seats_diploma_SE.txt"

// define for diploma for kj elec
#define MAX_SEATS_Diplo_KE 120
#define SEATS_FILE_Diplo_KE "seats_diploma_KE.txt"

// define for diploma for bhagubhai CH
#define MAX_SEATS_Diplo_bhagubhaiCH 120
#define SEATS_FILE_Diplo_bhagubhaiCH "seats_diploma_CH.txt"

// define for diploma in SC
// #define MAX_SEATS_Diplo_SCH 120
// #define SEATS_FILE_Diplo_SCH "seats_diploma_SCh.txt"

// define for diploma for thakur CH
#define MAX_SEATS_Diplo_TCH 120
#define SEATS_FILE_Diplo_TCH "seats_diploma_TCH.txt"

// define for diploma for govt CH
#define MAX_SEATS_Diplo_GCH 120
#define SEATS_FILE_Diplo_GCH "seats_diploma_GCH.txt"

// define for diploma for spit CH
#define MAX_SEATS_Diplo_SCH 120
#define SEATS_FILE_Diplo_SCH "seats_diploma_SCH.txt"

// define for diploma for kj Chem
#define MAX_SEATS_Diplo_KCH 120
#define SEATS_FILE_Diplo_KCH "seats_diploma_KCH.txt"

// define for diploma for bhagubhai Mech
#define MAX_SEATS_Diplo_bhagubhaiM 120
#define SEATS_FILE_Diplo_bhagubhaiM "seats_diploma_M.txt"

// define for diploma for thakur MECH
#define MAX_SEATS_Diplo_TM 120
#define SEATS_FILE_Diplo_TM "seats_diploma_TM.txt"

// define for diploma for govt MECH
#define MAX_SEATS_Diplo_GM 120
#define SEATS_FILE_Diplo_GM "seats_diploma_GM.txt"

// define for diploma for spit MECH
#define MAX_SEATS_Diplo_SM 120
#define SEATS_FILE_Diplo_SM "seats_diploma_SM.txt"

// define for diploma for kj MECH
#define MAX_SEATS_Diplo_KM 120
#define SEATS_FILE_Diplo_KM "seats_diploma_KM.txt"

// define for science
#define MAX_SEATS_Sci_govt 180
#define SEATS_FILE_Sci_govt "seats_science_govt.txt"

// define for childrens
#define MAX_SEATS_Sci_childrens 180
#define SEATS_FILE_Sci_childrens "seats_science_childrens.txt"

// define for Xaviers
#define MAX_SEATS_Sci_xav 180
#define SEATS_FILE_Sci_xav "seats_science_xav.txt"

// define for mum
#define MAX_SEATS_Sci_mum 180
#define SEATS_FILE_Sci_mum "seats_science_mum.txt"

// define for tata
#define MAX_SEATS_Sci_tata 180
#define SEATS_FILE_Sci_tata "seats_science_tata.txt"

// define for comm nm
#define MAX_SEATS_Comm_nm 300
#define SEATS_FILE_Comm_nm "seats_commerce_nm.txt"

// define for comm mithibai
#define MAX_SEATS_Comm_mithibai 300
#define SEATS_FILE_Comm_mithibai "seats_commerce_mithibai.txt"

// define for comm n
#define MAX_SEATS_Comm_n 300
#define SEATS_FILE_Comm_n "seats_commerce_n.txt"

// define for comm mk
#define MAX_SEATS_Comm_mk 300
#define SEATS_FILE_Comm_mk "seats_commerce_mk.txt"

// define for comm kes
#define MAX_SEATS_Comm_kes 300
#define SEATS_FILE_Comm_kes "seats_commerce_kes.txt"

// define for comm nm1
#define MAX_SEATS_Comm_nm1 300
#define SEATS_FILE_Comm_nm1 "seats_commerce_nm1.txt"

// define for comm mithibai1
#define MAX_SEATS_Comm_mithibai1 300
#define SEATS_FILE_Comm_mithibai1 "seats_commerce_mithibai1.txt"

// define for comm n1
#define MAX_SEATS_Comm_n1 300
#define SEATS_FILE_Comm_n1 "seats_commerce_n1.txt"

// define for comm mk1
#define MAX_SEATS_Comm_mk1 300
#define SEATS_FILE_Comm_mk1 "seats_commerce_mk1.txt"

// define for comm kes1
#define MAX_SEATS_Comm_kes1 300
#define SEATS_FILE_Comm_kes1 "seats_commerce_kes1.txt"

// define for arts artistic
#define MAX_SEATS_Arts_artistic 300
#define SEATS_FILE_Arts_artistic "seats_arts_artistic.txt"

// define for mithibaiClg
#define MAX_SEATS_Arts_mithibaiClg 300
#define SEATS_FILE_Arts_mithibaiClg "seats_arts_mithibaiClg.txt"

// define for pioneerClg
#define MAX_SEATS_Arts_pioneerClg 300
#define SEATS_FILE_Arts_pioneerClg "seats_arts_pioneerClg.txt"

// define for BK
#define MAX_SEATS_Arts_BK 300
#define SEATS_FILE_Arts_BK "seats_arts_BK.txt"

// define for fergusson
#define MAX_SEATS_Arts_fergusson 300
#define SEATS_FILE_Arts_fergusson "seats_arts_fergusson.txt"

// define for STJOHNS
#define MAX_SEATS_Arts_stjohns 300
#define SEATS_FILE_Arts_stjohns "seats_arts_stjohns.txt"

// define for mithibaicomp
#define MAX_SEATS_Arts_mithibaicomp 300
#define SEATS_FILE_Arts_mithibaicomp "seats_arts_mithibaicomp.txt"

// define for mithibaicomp
#define MAX_SEATS_Arts_mithibaicomp 300
#define SEATS_FILE_Arts_mithibaicomp "seats_arts_mithibaicomp.txt"

// define for JK
#define MAX_SEATS_Arts_jk 300
#define SEATS_FILE_Arts_jk "seats_arts_jk.txt"

// define for BKclg
#define MAX_SEATS_Arts_BKclg 300
#define SEATS_FILE_Arts_BKclg "seats_arts_BKclg.txt"

// define for madison
#define MAX_SEATS_Arts_madison 300
#define SEATS_FILE_Arts_madison "seats_arts_madison.txt"

#define MAX_USERS 100 // max user that can signup

// Defined structure for username and password
typedef struct
{
    char username[20];
    char password[20];
} User;
// defined an array of structure that can hold max_user ie 100
User users[MAX_USERS];

// struct for user INFO
struct UserInfo
{
    char name[100];
    char email[100];
    char address[100];
    char phone[100];
    char marks_sci[10];
    char marks_math[10];
    char marks_english[10];
    char total_marks[10];
};
// struct UserInfo users1[MAX_USERS];
// int numUsers = 0;
// function for seats integrated

int reserve_seats_intg_fiit(int num_seats_intg_fiit)
{
    int remaining_seats_intg_fiit;
    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Intg_fiit, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_intg_fiit);
        fclose(fp);
    }
    else
    {
        remaining_seats_intg_fiit = MAX_SEATS_Intg_fiit;
    }
    if (num_seats_intg_fiit <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }
    if (num_seats_intg_fiit > remaining_seats_intg_fiit)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }
    remaining_seats_intg_fiit -= num_seats_intg_fiit;
    // Updating the seats file
    fp = fopen(SEATS_FILE_Intg_fiit, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }
    fprintf(fp, "%d", remaining_seats_intg_fiit);
    fclose(fp);
    printf("\t\t%d seats reserved. Remaining seats: %d\n", num_seats_intg_fiit, remaining_seats_intg_fiit);
    return 0;
}
// function for intg_allen
int reserve_seats_intg_allen(int num_seats_intg_allen)
{
    int remaining_seats_intg_allen;
    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Intg_allen, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_intg_allen);
        fclose(fp);
    }
    else
    {
        remaining_seats_intg_allen = MAX_SEATS_Intg_allen;
    }
    if (num_seats_intg_allen <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }
    if (num_seats_intg_allen > remaining_seats_intg_allen)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }
    remaining_seats_intg_allen -= num_seats_intg_allen;
    // Updating the seats file
    fp = fopen(SEATS_FILE_Intg_allen, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }
    fprintf(fp, "%d", remaining_seats_intg_allen);
    fclose(fp);
    printf("%d seats reserved. Remaining seats: %d\n", num_seats_intg_allen, remaining_seats_intg_allen);
    return 0;
}
// function for intg pw
int reserve_seats_intg_pw(int num_seats_intg_pw)
{
    int remaining_seats_intg_pw;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Intg_pw, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_intg_pw);
        fclose(fp);
    }
    else
    {
        remaining_seats_intg_pw = MAX_SEATS_Intg_pw;
    }

    if (num_seats_intg_pw <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_intg_pw > remaining_seats_intg_pw)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_intg_pw -= num_seats_intg_pw;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Intg_pw, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_intg_pw);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_intg_pw, remaining_seats_intg_pw);

    return 0;
}
// function for unacademy
int reserve_seats_intg_unacademy(int num_seats_intg_unacademy)
{
    int remaining_seats_intg_unacademy;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Intg_unacademy, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_intg_unacademy);
        fclose(fp);
    }
    else
    {
        remaining_seats_intg_unacademy = MAX_SEATS_Intg_unacademy;
    }

    if (num_seats_intg_unacademy <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_intg_unacademy > remaining_seats_intg_unacademy)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_intg_unacademy -= num_seats_intg_unacademy;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Intg_unacademy, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_intg_unacademy);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_intg_unacademy, remaining_seats_intg_unacademy);

    return 0;
}
// function for nurture
int reserve_seats_intg_nurture(int num_seats_intg_nurture)
{
    int remaining_seats_intg_nurture;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Intg_nurture, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_intg_nurture);
        fclose(fp);
    }
    else
    {
        remaining_seats_intg_nurture = MAX_SEATS_Intg_nurture;
    }

    if (num_seats_intg_nurture <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_intg_nurture > remaining_seats_intg_nurture)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_intg_nurture -= num_seats_intg_nurture;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Intg_nurture, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_intg_nurture);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_intg_nurture, remaining_seats_intg_nurture);

    return 0;
}
// function for diploma bhagubhaiC
int reserve_seats_dip_BC(int num_seats_dip_BC)
{
    int remaining_seats_dip_BC;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_bhagubhaiC, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_BC);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_BC = MAX_SEATS_Diplo_bhagubhaiC;
    }

    if (num_seats_dip_BC <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_BC > remaining_seats_dip_BC)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_BC -= num_seats_dip_BC;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_bhagubhaiC, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_BC);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_BC, remaining_seats_dip_BC);

    return 0;
}
// diploma in thakur
int reserve_seats_dip_TC(int num_seats_dip_TC)
{
    int remaining_seats_dip_TC;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_TC, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_TC);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_TC = MAX_SEATS_Diplo_TC;
    }

    if (num_seats_dip_TC <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_TC > remaining_seats_dip_TC)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_TC -= num_seats_dip_TC;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_TC, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_TC);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_TC, remaining_seats_dip_TC);

    return 0;
}
// diploma govt c
int reserve_seats_dip_GC(int num_seats_dip_GC)
{
    int remaining_seats_dip_GC;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_GC, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_GC);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_GC = MAX_SEATS_Diplo_GC;
    }

    if (num_seats_dip_GC <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_GC > remaining_seats_dip_GC)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_GC -= num_seats_dip_GC;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_GC, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_GC);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_GC, remaining_seats_dip_GC);

    return 0;
}
// diploma in kj c
int reserve_seats_dip_KC(int num_seats_dip_KC)
{
    int remaining_seats_dip_KC;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_KC, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_KC);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_KC = MAX_SEATS_Diplo_KC;
    }

    if (num_seats_dip_KC <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_KC > remaining_seats_dip_KC)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_KC -= num_seats_dip_KC;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_KC, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_KC);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_KC, remaining_seats_dip_KC);

    return 0;
}
// diploma in spit c
int reserve_seats_dip_SC(int num_seats_dip_SC)
{
    int remaining_seats_dip_SC;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_SC, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_SC);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_SC = MAX_SEATS_Diplo_SC;
    }

    if (num_seats_dip_SC <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_SC > remaining_seats_dip_SC)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_SC -= num_seats_dip_SC;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_SC, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_SC);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_SC, remaining_seats_dip_SC);

    return 0;
}
// Bhagubhai IT
int reserve_seats_dip_BT(int num_seats_dip_BT)
{
    int remaining_seats_dip_BT;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_bhagubhaiT, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_BT);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_BT = MAX_SEATS_Diplo_bhagubhaiT;
    }

    if (num_seats_dip_BT <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_BT > remaining_seats_dip_BT)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_BT -= num_seats_dip_BT;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_bhagubhaiT, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_BT);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_BT, remaining_seats_dip_BT);

    return 0;
}
// GOVT IT
int reserve_seats_dip_GIT(int num_seats_dip_GIT)
{
    int remaining_seats_dip_GIT;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_GIT, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_GIT);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_GIT = MAX_SEATS_Diplo_GIT;
    }

    if (num_seats_dip_GIT <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_GIT > remaining_seats_dip_GIT)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_GIT -= num_seats_dip_GIT;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_GIT, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_GIT);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_GIT, remaining_seats_dip_GIT);

    return 0;
}
// THAKUR IT
int reserve_seats_dip_TIT(int num_seats_dip_TIT)
{
    int remaining_seats_dip_TIT;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_TIT, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_TIT);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_TIT = MAX_SEATS_Diplo_TIT;
    }

    if (num_seats_dip_TIT <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_TIT > remaining_seats_dip_TIT)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_TIT -= num_seats_dip_TIT;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_TIT, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_TIT);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_TIT, remaining_seats_dip_TIT);

    return 0;
}
// KJ IT
int reserve_seats_dip_KIT(int num_seats_dip_KIT)
{
    int remaining_seats_dip_KIT;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_KIT, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_KIT);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_KIT = MAX_SEATS_Diplo_KIT;
    }

    if (num_seats_dip_KIT <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_KIT > remaining_seats_dip_KIT)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_KIT -= num_seats_dip_KIT;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_KIT, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_KIT);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_KIT, remaining_seats_dip_KIT);

    return 0;
}
// SPIT IT
int reserve_seats_dip_SIT(int num_seats_dip_SIT)
{
    int remaining_seats_dip_SIT;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_DIPLO_SIT, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_SIT);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_SIT = MAX_SEATS_Diplo_SIT;
    }

    if (num_seats_dip_SIT <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_SIT > remaining_seats_dip_SIT)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_SIT -= num_seats_dip_SIT;

    // Updating the seats file
    fp = fopen(SEATS_FILE_DIPLO_SIT, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_SIT);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_SIT, remaining_seats_dip_SIT);

    return 0;
}
// BHAGUBHAI ELECTRONICS
int reserve_seats_dip_Bhagubhai(int num_seats_dip_bhagubhaiE)
{
    int remaining_seats_dip_E;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_bhagubhaiE, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_E);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_E = MAX_SEATS_Diplo_bhagubhaiE;
    }

    if (num_seats_dip_bhagubhaiE <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_bhagubhaiE > remaining_seats_dip_E)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_E -= num_seats_dip_bhagubhaiE;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_bhagubhaiE, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_E);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_bhagubhaiE, remaining_seats_dip_E);

    return 0;
}
// SPIT ELECTRONICS
int reserve_seats_dip_SE(int num_seats_dip_SE)
{
    int remaining_seats_dip_SE;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_SE, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_SE);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_SE = MAX_SEATS_Diplo_SE;
    }

    if (num_seats_dip_SE <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_SE > remaining_seats_dip_SE)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_SE -= num_seats_dip_SE;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_SE, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_SE);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_SE, remaining_seats_dip_SE);

    return 0;
}
// GOVE ELECTRONICS
int reserve_seats_dip_GE(int num_seats_dip_GE)
{
    int remaining_seats_dip_GE;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_GE, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_GE);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_GE = MAX_SEATS_Diplo_GE;
    }

    if (num_seats_dip_GE <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_GE > remaining_seats_dip_GE)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_GE -= num_seats_dip_GE;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_GE, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_GE);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_GE, remaining_seats_dip_GE);

    return 0;
}
// KJ ELECTRONICS
int reserve_seats_dip_KE(int num_seats_dip_KE)
{
    int remaining_seats_dip_KE;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_KE, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_KE);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_KE = MAX_SEATS_Diplo_KE;
    }

    if (num_seats_dip_KE <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_KE > remaining_seats_dip_KE)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_KE -= num_seats_dip_KE;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_KE, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_KE);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_KE, remaining_seats_dip_KE);

    return 0;
}
// THAKUR ELECTRONICS
int reserve_seats_dip_TE(int num_seats_dip_TE)
{
    int remaining_seats_dip_TE;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_TE, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_TE);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_TE = MAX_SEATS_Diplo_TE;
    }

    if (num_seats_dip_TE <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_TE > remaining_seats_dip_TE)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_TE -= num_seats_dip_TE;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_TE, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_TE);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_TE, remaining_seats_dip_TE);

    return 0;
}
// Bhagubhai Mech
int reserve_seats_dip_BM(int num_seats_dip_BM)
{
    int remaining_seats_dip_BM;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_bhagubhaiM, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_BM);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_BM = MAX_SEATS_Diplo_bhagubhaiM;
    }

    if (num_seats_dip_BM <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_BM > remaining_seats_dip_BM)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_BM -= num_seats_dip_BM;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_bhagubhaiM, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_BM);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_BM, remaining_seats_dip_BM);

    return 0;
}
// Govt Mech
int reserve_seats_dip_GM(int num_seats_dip_GM)
{
    int remaining_seats_dip_GM;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_GM, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_GM);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_GM = MAX_SEATS_Diplo_GM;
    }

    if (num_seats_dip_GM <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_GM > remaining_seats_dip_GM)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_GM -= num_seats_dip_GM;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_GM, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_GM);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_GM, remaining_seats_dip_GM);

    return 0;
}
// KJ Mech
int reserve_seats_dip_KM(int num_seats_dip_KM)
{
    int remaining_seats_dip_KM;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_KM, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_KM);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_KM = MAX_SEATS_Diplo_KM;
    }

    if (num_seats_dip_KM <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_KM > remaining_seats_dip_KM)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_KM -= num_seats_dip_KM;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_KM, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_KM);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_KM, remaining_seats_dip_KM);

    return 0;
}
// SPIT Mech
int reserve_seats_dip_SM(int num_seats_dip_SM)
{
    int remaining_seats_dip_SM;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_SM, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_SM);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_SM = MAX_SEATS_Diplo_SM;
    }

    if (num_seats_dip_SM <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_SM > remaining_seats_dip_SM)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_SM -= num_seats_dip_SM;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_SM, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_SM);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_SM, remaining_seats_dip_SM);

    return 0;
}
// Thakur Mech
int reserve_seats_dip_TM(int num_seats_dip_TM)
{
    int remaining_seats_dip_TM;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_TM, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_TM);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_TM = MAX_SEATS_Diplo_TM;
    }

    if (num_seats_dip_TM <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_TM > remaining_seats_dip_TM)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_TM -= num_seats_dip_TM;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_TM, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_TM);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_TM, remaining_seats_dip_TM);

    return 0;
}
// bhagubhai chemical
int reserve_seats_dip_CH(int num_seats_dip_CH)
{
    int remaining_seats_dip_CH;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_bhagubhaiCH, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_CH);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_CH = MAX_SEATS_Diplo_bhagubhaiCH;
    }

    if (num_seats_dip_CH <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_CH > remaining_seats_dip_CH)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_CH -= num_seats_dip_CH;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_bhagubhaiCH, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_CH);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_CH, remaining_seats_dip_CH);

    return 0;
}
// SPIT CHEMICAL
int reserve_seats_dip_SCH(int num_seats_dip_SCH)
{
    int remaining_seats_dip_SCH;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_SCH, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_SCH);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_SCH = MAX_SEATS_Diplo_SCH;
    }

    if (num_seats_dip_SCH <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_SCH > remaining_seats_dip_SCH)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_SCH -= num_seats_dip_SCH;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_SCH, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_SCH);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_SCH, remaining_seats_dip_SCH);

    return 0;
}
// THAKUR CHEMICAL
int reserve_seats_dip_TCH(int num_seats_dip_TCH)
{
    int remaining_seats_dip_TCH;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_TCH, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_TCH);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_TCH = MAX_SEATS_Diplo_TCH;
    }

    if (num_seats_dip_TCH <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_TCH > remaining_seats_dip_TCH)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_TCH -= num_seats_dip_TCH;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_TCH, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_TCH);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_TCH, remaining_seats_dip_TCH);

    return 0;
}
// KJ CHEMICAL
int reserve_seats_dip_KCH(int num_seats_dip_KCH)
{
    int remaining_seats_dip_KCH;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_KCH, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_KCH);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_KCH = MAX_SEATS_Diplo_KCH;
    }

    if (num_seats_dip_KCH <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_KCH > remaining_seats_dip_KCH)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_KCH -= num_seats_dip_KCH;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_KCH, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_KCH);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_KCH, remaining_seats_dip_KCH);

    return 0;
}
// GOV CHEMICAL
int reserve_seats_dip_GCH(int num_seats_dip_GCH)
{
    int remaining_seats_dip_GCH;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Diplo_GCH, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_dip_GCH);
        fclose(fp);
    }
    else
    {
        remaining_seats_dip_GCH = MAX_SEATS_Diplo_GCH;
    }

    if (num_seats_dip_GCH <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_dip_GCH > remaining_seats_dip_GCH)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_dip_GCH -= num_seats_dip_GCH;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Diplo_GCH, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_dip_GCH);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_dip_GCH, remaining_seats_dip_GCH);

    return 0;
}
// function for science govt
int reserve_seats_sci_govt(int num_seats_sci_govt)
{
    int remaining_seats_sci_govt;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Sci_govt, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_sci_govt);
        fclose(fp);
    }
    else
    {
        remaining_seats_sci_govt = MAX_SEATS_Sci_govt;
    }

    if (num_seats_sci_govt <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_sci_govt > remaining_seats_sci_govt)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_sci_govt -= num_seats_sci_govt;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Sci_govt, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_sci_govt);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_sci_govt, remaining_seats_sci_govt);

    return 0;
}
// function for science childrens
int reserve_seats_sci_childrens(int num_seats_sci_childrens)
{
    int remaining_seats_sci_childrens;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Sci_childrens, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_sci_childrens);
        fclose(fp);
    }
    else
    {
        remaining_seats_sci_childrens = MAX_SEATS_Sci_childrens;
    }

    if (num_seats_sci_childrens <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_sci_childrens > remaining_seats_sci_childrens)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_sci_childrens -= num_seats_sci_childrens;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Sci_childrens, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_sci_childrens);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_sci_childrens, remaining_seats_sci_childrens);

    return 0;
}
// function for science mumbai
int reserve_seats_sci_mum(int num_seats_sci_mum)
{
    int remaining_seats_sci_mum;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Sci_mum, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_sci_mum);
        fclose(fp);
    }
    else
    {
        remaining_seats_sci_mum = MAX_SEATS_Sci_mum;
    }

    if (num_seats_sci_mum <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_sci_mum > remaining_seats_sci_mum)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_sci_mum -= num_seats_sci_mum;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Sci_mum, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_sci_mum);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_sci_mum, remaining_seats_sci_mum);

    return 0;
}
// function for science xav
int reserve_seats_sci_xav(int num_seats_sci_xav)
{
    int remaining_seats_sci_xav;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Sci_xav, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_sci_xav);
        fclose(fp);
    }
    else
    {
        remaining_seats_sci_xav = MAX_SEATS_Sci_xav;
    }

    if (num_seats_sci_xav <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_sci_xav > remaining_seats_sci_xav)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_sci_xav -= num_seats_sci_xav;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Sci_xav, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_sci_xav);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_sci_xav, remaining_seats_sci_xav);

    return 0;
}
// function for science tata
int reserve_seats_sci_tata(int num_seats_sci_tata)
{
    int remaining_seats_sci_tata;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Sci_tata, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_sci_tata);
        fclose(fp);
    }
    else
    {
        remaining_seats_sci_tata = MAX_SEATS_Sci_tata;
    }

    if (num_seats_sci_tata <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_sci_tata > remaining_seats_sci_tata)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_sci_tata -= num_seats_sci_tata;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Sci_tata, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_sci_tata);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_sci_tata, remaining_seats_sci_tata);

    return 0;
}
// function for arts artistic
int reserve_seats_arts_artistic(int num_seats_arts_artistic)
{
    int remaining_seats_arts_artistic;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Arts_artistic, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_arts_artistic);
        fclose(fp);
    }
    else
    {
        remaining_seats_arts_artistic = MAX_SEATS_Arts_artistic;
    }

    if (num_seats_arts_artistic <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_arts_artistic > remaining_seats_arts_artistic)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_arts_artistic -= num_seats_arts_artistic;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Arts_artistic, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_arts_artistic);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_arts_artistic, remaining_seats_arts_artistic);

    return 0;
}
// function for arts mithibaiclg
int reserve_seats_arts_mithibaiClg(int num_seats_arts_mithibaiclg)
{
    int remaining_seats_arts_mithibaiclg;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Arts_mithibaiClg, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_arts_mithibaiclg);
        fclose(fp);
    }
    else
    {
        remaining_seats_arts_mithibaiclg = MAX_SEATS_Arts_mithibaiClg;
    }

    if (num_seats_arts_mithibaiclg <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_arts_mithibaiclg > remaining_seats_arts_mithibaiclg)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_arts_mithibaiclg -= num_seats_arts_mithibaiclg;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Arts_mithibaiClg, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_arts_mithibaiclg);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_arts_mithibaiclg, remaining_seats_arts_mithibaiclg);

    return 0;
}
// function for arts pioneerclg
int reserve_seats_arts_pioneerClg(int num_seats_arts_poineerclg)
{
    int remaining_seats_arts_poineerclg;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Arts_pioneerClg, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_arts_poineerclg);
        fclose(fp);
    }
    else
    {
        remaining_seats_arts_poineerclg = MAX_SEATS_Arts_pioneerClg;
    }

    if (num_seats_arts_poineerclg <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_arts_poineerclg > remaining_seats_arts_poineerclg)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_arts_poineerclg -= num_seats_arts_poineerclg;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Arts_pioneerClg, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_arts_poineerclg);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_arts_poineerclg, remaining_seats_arts_poineerclg);

    return 0;
}
// function for arts bk
int reserve_seats_arts_BK(int num_seats_arts_bk)
{
    int remaining_seats_arts_bk;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Arts_BK, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_arts_bk);
        fclose(fp);
    }
    else
    {
        remaining_seats_arts_bk = MAX_SEATS_Arts_BK;
    }

    if (num_seats_arts_bk <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_arts_bk > remaining_seats_arts_bk)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_arts_bk -= num_seats_arts_bk;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Arts_BK, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_arts_bk);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_arts_bk, remaining_seats_arts_bk);

    return 0;
}
// function for fergusson
int reserve_seats_arts_fergusson(int num_seats_arts_fergusson)
{
    int remaining_seats_arts_fergusson;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Arts_fergusson, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_arts_fergusson);
        fclose(fp);
    }
    else
    {
        remaining_seats_arts_fergusson = MAX_SEATS_Arts_fergusson;
    }

    if (num_seats_arts_fergusson <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_arts_fergusson > remaining_seats_arts_fergusson)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_arts_fergusson -= num_seats_arts_fergusson;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Arts_fergusson, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_arts_fergusson);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_arts_fergusson, remaining_seats_arts_fergusson);

    return 0;
}
// function for stjohns
int reserve_seats_arts_stjohns(int num_seats_arts_stjohns)
{
    int remaining_seats_arts_stjohns;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Arts_stjohns, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_arts_stjohns);
        fclose(fp);
    }
    else
    {
        remaining_seats_arts_stjohns = MAX_SEATS_Arts_stjohns;
    }

    if (num_seats_arts_stjohns <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_arts_stjohns > remaining_seats_arts_stjohns)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_arts_stjohns -= num_seats_arts_stjohns;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Arts_stjohns, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_arts_stjohns);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_arts_stjohns, remaining_seats_arts_stjohns);

    return 0;
}
// function for arts mithibaicomp
int reserve_seats_arts_mithibaicomp(int num_seats_arts_mithibaicomp)
{
    int remaining_seats_arts_mithibaicomp;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Arts_mithibaicomp, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_arts_mithibaicomp);
        fclose(fp);
    }
    else
    {
        remaining_seats_arts_mithibaicomp = MAX_SEATS_Arts_mithibaicomp;
    }

    if (num_seats_arts_mithibaicomp <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_arts_mithibaicomp > remaining_seats_arts_mithibaicomp)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_arts_mithibaicomp -= num_seats_arts_mithibaicomp;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Arts_mithibaicomp, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_arts_mithibaicomp);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_arts_mithibaicomp, remaining_seats_arts_mithibaicomp);

    return 0;
}
// function for arts jk
int reserve_seats_arts_jk(int num_seats_arts_jk)
{
    int remaining_seats_arts_jk;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Arts_jk, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_arts_jk);
        fclose(fp);
    }
    else
    {
        remaining_seats_arts_jk = MAX_SEATS_Arts_jk;
    }

    if (num_seats_arts_jk <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_arts_jk > remaining_seats_arts_jk)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_arts_jk -= num_seats_arts_jk;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Arts_jk, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_arts_jk);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_arts_jk, remaining_seats_arts_jk);

    return 0;
}
// function for arts BKclg
int reserve_seats_arts_BKclg(int num_seats_arts_BKclg)
{
    int remaining_seats_arts_BKclg;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Arts_BKclg, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_arts_BKclg);
        fclose(fp);
    }
    else
    {
        remaining_seats_arts_BKclg = MAX_SEATS_Arts_BKclg;
    }

    if (num_seats_arts_BKclg <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_arts_BKclg > remaining_seats_arts_BKclg)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_arts_BKclg -= num_seats_arts_BKclg;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Arts_jk, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_arts_BKclg);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_arts_BKclg, remaining_seats_arts_BKclg);

    return 0;
}
// function for arts madison
int reserve_seats_arts_madison(int num_seats_arts_madison)
{
    int remaining_seats_arts_madison;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Arts_madison, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_arts_madison);
        fclose(fp);
    }
    else
    {
        remaining_seats_arts_madison = MAX_SEATS_Arts_madison;
    }

    if (num_seats_arts_madison <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_arts_madison > remaining_seats_arts_madison)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_arts_madison -= num_seats_arts_madison;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Arts_madison, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_arts_madison);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_arts_madison, remaining_seats_arts_madison);

    return 0;
}
// function for commerce NM
int reserve_seats_comm_nm(int num_seats_comm_nm)
{
    int remaining_seats_comm_nm;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Comm_nm, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_comm_nm);
        fclose(fp);
    }
    else
    {
        remaining_seats_comm_nm = MAX_SEATS_Comm_nm;
    }

    if (num_seats_comm_nm <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_comm_nm > remaining_seats_comm_nm)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_comm_nm -= num_seats_comm_nm;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Comm_nm, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_comm_nm);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_comm_nm, remaining_seats_comm_nm);

    return 0;
}
// function of seats for comm mithibai
int reserve_seats_comm_mithibai(int num_seats_comm_mithibai)
{
    int remaining_seats_comm_mithibai;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Comm_mithibai, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_comm_mithibai);
        fclose(fp);
    }
    else
    {
        remaining_seats_comm_mithibai = MAX_SEATS_Comm_mithibai;
    }

    if (num_seats_comm_mithibai <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_comm_mithibai > remaining_seats_comm_mithibai)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_comm_mithibai -= num_seats_comm_mithibai;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Comm_mithibai, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_comm_mithibai);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_comm_mithibai, remaining_seats_comm_mithibai);

    return 0;
}
// function of seats for n
int reserve_seats_comm_n(int num_seats_comm_n)
{
    int remaining_seats_comm_n;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Comm_n, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_comm_n);
        fclose(fp);
    }
    else
    {
        remaining_seats_comm_n = MAX_SEATS_Comm_n;
    }

    if (num_seats_comm_n <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_comm_n > remaining_seats_comm_n)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_comm_n -= num_seats_comm_n;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Comm_n, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_comm_n);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_comm_n, remaining_seats_comm_n);

    return 0;
}
// function for MK
int reserve_seats_comm_mk(int num_seats_comm_mk)
{
    int remaining_seats_comm_mk;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Comm_mk, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_comm_mk);
        fclose(fp);
    }
    else
    {
        remaining_seats_comm_mk = MAX_SEATS_Comm_mk;
    }

    if (num_seats_comm_mk <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_comm_mk > remaining_seats_comm_mk)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_comm_mk -= num_seats_comm_mk;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Comm_mk, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_comm_mk);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_comm_mk, remaining_seats_comm_mk);

    return 0;
}
// function for kes
int reserve_seats_comm_kes(int num_seats_comm_kes)
{
    int remaining_seats_comm_kes;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Comm_kes, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_comm_kes);
        fclose(fp);
    }
    else
    {
        remaining_seats_comm_kes = MAX_SEATS_Comm_kes;
    }

    if (num_seats_comm_kes <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_comm_kes > remaining_seats_comm_kes)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_comm_kes -= num_seats_comm_kes;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Comm_kes, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_comm_kes);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_comm_kes, remaining_seats_comm_kes);

    return 0;
}
// function for commerce NM1
int reserve_seats_comm_nm1(int num_seats_comm_nm1)
{
    int remaining_seats_comm_nm1;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Comm_nm1, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_comm_nm1);
        fclose(fp);
    }
    else
    {
        remaining_seats_comm_nm1 = MAX_SEATS_Comm_nm1;
    }

    if (num_seats_comm_nm1 <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_comm_nm1 > remaining_seats_comm_nm1)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_comm_nm1 -= num_seats_comm_nm1;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Comm_nm1, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_comm_nm1);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_comm_nm1, remaining_seats_comm_nm1);

    return 0;
}
// function of seats for comm mithibai1
int reserve_seats_comm_mithibai1(int num_seats_comm_mithibai1)
{
    int remaining_seats_comm_mithibai1;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Comm_mithibai1, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_comm_mithibai1);
        fclose(fp);
    }
    else
    {
        remaining_seats_comm_mithibai1 = MAX_SEATS_Comm_mithibai1;
    }

    if (num_seats_comm_mithibai1 <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_comm_mithibai1 > remaining_seats_comm_mithibai1)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_comm_mithibai1 -= num_seats_comm_mithibai1;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Comm_mithibai1, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_comm_mithibai1);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_comm_mithibai1, remaining_seats_comm_mithibai1);

    return 0;
}
// function of seats for n1
int reserve_seats_comm_n1(int num_seats_comm_n1)
{
    int remaining_seats_comm_n1;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Comm_n1, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_comm_n1);
        fclose(fp);
    }
    else
    {
        remaining_seats_comm_n1 = MAX_SEATS_Comm_n1;
    }

    if (num_seats_comm_n1 <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_comm_n1 > remaining_seats_comm_n1)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_comm_n1 -= num_seats_comm_n1;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Comm_n1, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_comm_n1);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_comm_n1, remaining_seats_comm_n1);

    return 0;
}
// function for MK1
int reserve_seats_comm_mk1(int num_seats_comm_mk1)
{
    int remaining_seats_comm_mk1;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Comm_mk1, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_comm_mk1);
        fclose(fp);
    }
    else
    {
        remaining_seats_comm_mk1 = MAX_SEATS_Comm_mk1;
    }

    if (num_seats_comm_mk1 <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_comm_mk1 > remaining_seats_comm_mk1)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_comm_mk1 -= num_seats_comm_mk1;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Comm_mk1, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_comm_mk1);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_comm_mk1, remaining_seats_comm_mk1);

    return 0;
}
// function for kes1
int reserve_seats_comm_kes1(int num_seats_comm_kes1)
{
    int remaining_seats_comm_kes1;

    // Reading the number of reserved seats from the seats file
    FILE *fp = fopen(SEATS_FILE_Comm_kes1, "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &remaining_seats_comm_kes1);
        fclose(fp);
    }
    else
    {
        remaining_seats_comm_kes1 = MAX_SEATS_Comm_kes1;
    }

    if (num_seats_comm_kes1 <= 0)
    {
        printf("Invalid number of seats.\n");
        return -1; // error handling
    }

    if (num_seats_comm_kes1 > remaining_seats_comm_kes1)
    {
        printf("Not enough seats available.\n");
        return -1; // error handling
    }

    remaining_seats_comm_kes1 -= num_seats_comm_kes1;

    // Updating the seats file
    fp = fopen(SEATS_FILE_Comm_kes1, "w");
    if (fp == NULL)
    {
        printf("Error opening seats file.\n");
        return -1;
    }

    fprintf(fp, "%d", remaining_seats_comm_kes1);

    fclose(fp);

    printf("%d seats reserved. Remaining seats: %d\n", num_seats_comm_kes1, remaining_seats_comm_kes1);

    return 0;
}
void centerPrint(const char *text);
void centerPrint(const char *text)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    int consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int textLength = strlen(text);
    int leftPadding = (consoleWidth - textLength) / 2;
    printf("%*s%s\n", leftPadding, "", text);
}
int defaultSWITCHcase()
{
    printf("\n\n");
    printf("\t\tEnter Valid Input\n");
    return 0;
}
int exitFROMCODE()
{
    printf("\t\tExiting! Thanks For Your Time\n");
    return 0;
}
// HIGH SCHOOL
int scienceALLCollege()
{
    centerPrint("=============== Welcome to the Result Section of our Institute ===============\n\n");
    printf("\t\tHere Below is the result of the Academic Year 2021 2022 \n\n ");
    printf("\t\tTOPPERS : \n");
    printf("\t\tRajesh Panchal   : 99.20% (PCB) \n");
    printf("\t\tKaran Kumar      : 99.10% (PCB)\n");
    printf("\t\tNitesh Shah      : 98.50% (PCB)\n");
    printf("\t\tSuresh Mistry    : 99.70% (PCM) \n");
    printf("\t\tMohan Varma      : 99.60% (PCM) \n");
    printf("\t\tRamesh Shah      : 99.70% (PCM) \n");
    printf("\t\tSuresh Sharma    : 99.50% (PCMB) \n");
    printf("\t\tParam Mehta      : 99.40% (PCMB) \n");
    printf("\t\tMohammed Shaikh  : 99.30% (PCMB) \n");
    printf("\n\n");
    centerPrint("=============== Our Faculties ===============\n\n");
    printf("\t\t1.Pankaj Sir    ---> Organic Chemistry (Teaching Experience more than 20 years)\n");
    printf("\t\t2.Sarvesh Sir   ---> InOrganic Chemistry (Teaching Experience more than 20 years)\n");
    printf("\t\t3.Rajesh Sir    ---> Physical Chemistry (Teaching Experience more than 20 years)\n");
    printf("\t\t4.Rajendra Sir  ---> Physics (Teaching Experience more than 10 years)\n");
    printf("\t\t5.Gauri Madam   ---> Maths (Teaching Experience more than 15 years)\n");
    printf("\t\t6.Varsha Madam  ---> Biology (Teaching Experience more than 15 years)\n");
    printf("\t\t7.Bhoomi Madam  ---> Zoology (Teaching Experience more than 15 years)\n");
    printf("\n\n");
    centerPrint("=============== Aggregate (Overall) Passing Percentage and Result ===============\n\n");
    printf("\t\tMore than 95%   : 30  students (16.7%)\n");
    printf("\t\tMore than 90%   : 50  students (27.7%)\n");
    printf("\t\tMore than 85%   : 60  students (33.3%)\n");
    printf("\t\tMore than 80%   : 40  students (22.3%)\n");
    printf("\t\tDistinction     : 180 students (all) (100%)\n");
    printf("\n\n");
    centerPrint("=============== FEES STRUCTURE ===============\n\n");
    printf("\t\tHere Below are some of the packages of paying fee \n\n ");
    printf("\t\tFees : Rs 2,00,000/- only (Two Lakhs) (11th and 12th Combined)\n");
    printf("\t\tOption 1. ->   Rs 8,333 /- EMI (till 24 months)\n");
    printf("\t\tOption 2. -> 50 percent at the time of admission and remaining 50 percent after completion of one successful year\n");
    printf("\t\tall at once By Cash , Credit Card or Debit Card Or UPI / Gpay\n");
    printf("\t\tAll of The further procedure will be done offline\n");
    printf("\n\n");
    return 0;
}
int GovernmentHighSchool()
{
    scienceALLCollege();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tKandivali West (Parekh Nagar)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> governmentCONVENT@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> governmentHIGHSCHOOL\n");
    printf("\t\tWebsite                           ----> https://governmentHighschool.com \n");
    printf("\n\n");
    return 0;
}
int childrensACADEMY()
{
    scienceALLCollege();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tKandivali EAST (Ashok Nagar)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> childrensacademy@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> childrensacademyOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://childernsAcademy.com \n");
    printf("\n\n");
    return 0;
}
int mumbaiUNIVERSITY()
{
    scienceALLCollege();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tChurchgate (Trident Square)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> mumbaiUNIVERSITY@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> mumbaiUNIVERSITYOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://mubaiUniversity.com \n");
    printf("\n\n");
    return 0;
}
int xaviers()
{
    scienceALLCollege();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tJogeshwari EAST (Near Station)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> xaviers@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> xaviersOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://funacademy.com \n");
    printf("\n\n");
    return 0;
}
int TATAclg()
{
    scienceALLCollege();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tBandra (BKC)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> TataCLG@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> TataCLGOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://tataInstitute.com \n");
    printf("\n\n");
    return 0;
}

// HIGH SCHOOL END
// COMMERCE
int commerceALL()
{
    centerPrint("=============== Welcome to the Result Section of our Institute ===============\n\n");
    printf("\t\tHere Below is the result of the Academic Year 2021 2022 \n\n ");
    printf("\t\tTOPPERS : \n");
    printf("\t\tMohan Varma     : 99.60% (COMM / IT)\n");
    printf("\t\tSuresh Sharma   : 99.50% (COMM / IT) \n");
    printf("\t\tRajesh Panchal  : 99.20% (COMM / IT) \n");
    printf("\t\tSuresh Mistry   : 99.40% (COMM / IT) \n");
    printf("\t\tRamesh Shah     : 99.70% (COMM / IT) \n");
    printf("\t\tParam Mehta     : 99.40% (COMM / MATHS) \n");
    printf("\t\tMohammed Shaikh : 99.30% (COMM / MATHS) \n");
    printf("\t\tKaran Kumar     : 99.10% (COMM / MATHS) \n");
    printf("\t\tNitesh Shah     : 98.50% (COMM / MATHS) \n");
    printf("\t\tKrishna Kumar   : 99.90% (COMM / MATHS) \n");
    printf("\n\n");
    centerPrint("=============== Our Faculties ===============\n\n");
    printf("\t\t1.Hitesh Sir    ---> Organisation of Commerce and Management (Teaching Experience more than 20 years)\n");
    printf("\t\t2.Pankaj Sir    ---> Maths part 1 (Teaching Experience more than 20 years)\n");
    printf("\t\t3.Dhramesh Sir  ---> Maths part 2 (Teaching Experience more than 20 years)\n");
    printf("\t\t4.Rajendra Sir  ---> Book Keeping (Teaching Experience more than 10 years)\n");
    printf("\t\t5.Gauri Madam   ---> English (Teaching Experience more than 15 years)\n");
    printf("\t\t6.Varsha Madam  ---> IT (Teaching Experience more than 15 years)\n");
    printf("\n\n");
    centerPrint("=============== Aggregate (Overall) Passing Percentage and Result ===============\n\n");
    printf("\t\tMore than 95%   : 60  students (20%)\n");
    printf("\t\tMore than 90%   : 90  students (30%)\n");
    printf("\t\tMore than 85%   : 100  students (33.3%)\n");
    printf("\t\tMore than 80%   : 50  students (16.67%)\n");
    printf("\t\tDistinction     : 300 students (all) (100%)\n");
    printf("\n\n");
    centerPrint("=============== FEES STRUCTURE ===============\n\n");
    printf("\t\tHere Below are some of the packages of paying fee \n\n ");
    printf("\t\tFees : Rs 1,000/- only (One Thousand) (11th only)\n");
    printf("\t\t Option 1. ->  Rs 83.3 /- EMI (till 12 months)\n");
    printf("\t\t Option 2. -> 50 percent at the time of admission and remaining 50 percent after completion of one successful year\n");
    printf("\t\t all at once By Cash , Credit Card or Debit Card Or UPI / Gpay\n");
    printf("\t\tAll of The further procedure will be done offline\n");
    printf("\n\n");
    return 0;
}
int NMCollege()
{
    commerceALL();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tVile Parle (West)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> NMcl@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> NMUmang\n");
    printf("\t\tWebsite                           ----> https://nm/ac.com \n");
    printf("\n\n");
    return 0;
}
int MIthibaiCLG()
{
    commerceALL();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tVile Parle (West)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> Mithibaicl@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> MithibaiKshitij\n");
    printf("\t\tWebsite                           ----> https://mithibai/ac.com \n");
    printf("\n\n");
    return 0;
}
int NL()
{
    commerceALL();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tMalad (West)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> nlcl@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> NLofficial\n");
    printf("\t\tWebsite                           ----> https://nl/ac.com \n");
    printf("\n\n");
    return 0;
}
int MKgandhi()
{
    commerceALL();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tAndheri (West)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> mkGANDHI@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> MKGANDHIofficial\n");
    printf("\t\tWebsite                           ----> https://MKGandhi.com \n");
    printf("\n\n");
    return 0;
}
int KESCLG()
{
    commerceALL();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tKandivali (West)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> KESclg@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> KESclgofficial\n");
    printf("\t\tWebsite                           ----> https://kes/clg.com \n");
    printf("\n\n");
    return 0;
}

// COMMERCE END
// ARTS
int artsCOMMON()
{
    centerPrint("=============== Welcome to the Result Section of our Institute ===============\n\n");
    printf("\t\tHere Below is the result of the Academic Year 2021 2022 \n\n ");
    printf("\t\tTOPPERS : \n");
    printf("\t\tParam Mehta     : 99.40% (ARTS / HUMANITIES) \n");
    printf("\t\tMohammed Shaikh : 99.30% (ARTS / HUMANITIES) \n");
    printf("\t\tKaran Kumar     : 99.10% (ARTS / HUMANITIES) \n");
    printf("\t\tNitesh Shah     : 98.50% (ARTS / HUMANITIES) \n");
    printf("\t\tKrishna Kumar   : 99.90% (ARTS / HUMANITIES) \n");
    printf("\t\tMohan Varma     : 99.60% (ARTS / COMP. SCI) \n");
    printf("\t\tSuresh Sharma   : 99.50% (ARTS / COMP. SCI)  \n");
    printf("\t\tRajesh Panchal  : 99.20% (ARTS / COMP. SCI)  \n");
    printf("\t\tSuresh Mistry   : 99.40% (ARTS / COMP. SCI)  \n");
    printf("\t\tRamesh Shah     : 99.70% (ARTS / COMP. SCI)  \n");
    printf("\n\n");
    centerPrint("=============== Our Faculties ===============\n\n");
    printf("\t\t1.Hitesh Sir    ---> History (Teaching Experience more than 20 years)\n");
    printf("\t\t2.Pankaj Sir    ---> Geography (Teaching Experience more than 20 years)\n");
    printf("\t\t3.Dhramesh Sir  ---> Humanities (Teaching Experience more than 20 years)\n");
    printf("\t\t4.Rajendra Sir  ---> Computer Science (Teaching Experience more than 10 years)\n");
    printf("\t\t5.Gauri Madam   ---> English (Teaching Experience more than 15 years)\n");
    printf("\t\t6.Varsha Madam  ---> Skill Development (Teaching Experience more than 15 years)\n");
    printf("\n\n");
    centerPrint("=============== Aggregate (Overall) Passing Percentage and Result ===============\n\n");
    printf("\t\tMore than 95%   : 60  students (20%)\n");
    printf("\t\tMore than 90%   : 90  students (30%)\n");
    printf("\t\tMore than 85%   : 100  students (33.3%)\n");
    printf("\t\tMore than 80%   : 50  students (16.67%)\n");
    printf("\t\tDistinction     : 300 students (all) (100%)\n");
    printf("\n\n");
    centerPrint("=============== FEES STRUCTURE ===============\n\n");
    printf("\t\tHere Below are some of the packages of paying fee \n\n ");
    printf("\t\tFees : Rs 1,000/- only (One Thousand) (11th only)\n");
    printf("\t\t Option 1. ->  Rs 83.3 /- EMI (till 12 months)\n");
    printf("\t\t Option 2. -> 50 percent at the time of admission and remaining 50 percent after completion of one successful year\n");
    printf("\t\t all at once By Cash , Credit Card or Debit Card Or UPI / Gpay\n");
    printf("\t\tAll of The further procedure will be done offline\n");
    printf("\n\n");
    return 0;
}
int artisticCLG()
{
    artsCOMMON();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tMulund (West)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> artisticclg@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> ARTISTICclgOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://ArtisticCollege.com \n");
    printf("\n\n");
    return 0;
}
int mithibaiARTS()
{
    artsCOMMON();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tVile Parle (West)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> mithibaiARTSclg@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> MITHIBAIARTSclgOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://MithibaiCollege/arts.com \n");
    printf("\n\n");
    return 0;
}
int PIONEERclg()
{
    artsCOMMON();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tSantacruz (West)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> pioneerARTSclg@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> pioneerclgOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://PioneerCollege.com \n");
    printf("\n\n");
    return 0;
}
int BKshroff()
{
    artsCOMMON();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tKandivali (West)\n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> BKSHROFF@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> bkshroffOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://BKShroff/college.com \n");
    printf("\n\n");
    return 0;
}
int fergussonCLG()
{
    artsCOMMON();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tGrant Road \n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> FergussonCLG@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> FergussonCLGOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://FergussonCollege.com \n");
    printf("\n\n");
    return 0;
}
int stjohns()
{
    artsCOMMON();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tBorivali West \n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> stjohns@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> STJOHNSOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://stjohns/clg.com \n");
    printf("\n\n");
    return 0;
}
int JKclg()
{
    artsCOMMON();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tGoregaon West \n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> jkclg@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> jkclgOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://jkclg.com \n");
    printf("\n\n");
    return 0;
}
int madinson()
{
    artsCOMMON();
    centerPrint("=============== Our Location (Branch) ===============\n\n");
    printf("\t\tCharni Road \n");
    printf("\n\n");
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> madinsonCLG@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> madinsonCLGFFICIAL\n");
    printf("\t\tWebsite                           ----> https://madinsonCLG.com \n");
    printf("\n\n");
    return 0;
}
// ARTS END
// INTEGRATED
int INTEGRATEDall()
{
    centerPrint("=============== Welcome to the Result Section of our Institute ===============\n\n");
    printf("\t\tHere Below is the result of the Academic Year 2021 2022 \n\n ");
    printf("\t\tTOPPERS : \n");
    printf("\t\tSuresh Mistry   : 99.70% (PCM) \n");
    printf("\t\tMohan Varma     : 99.60% (PCM) \n");
    printf("\t\tRamesh Shah     : 99.70% (PCM) \n");
    printf("\t\tSuresh Sharma   : 99.50% (PCMB) \n");
    printf("\t\tParam Mehta     : 99.40% (PCMB) \n");
    printf("\t\tMohammed Shaikh : 99.30% (PCMB) \n");
    printf("\t\tRajesh Panchal  : 99.20% (PCB) \n");
    printf("\t\tKaran Kumar     : 99.10% (PCB)\n");
    printf("\t\tNitesh Shah     : 98.50% (PCB)\n");
    printf("\n\n");
    centerPrint("=============== Our Faculties ===============\n\n");
    printf("\t\t1.Pankaj Sir   ---> Organic Chemistry (Teaching Experience more than 20 years)\n");
    printf("\t\t2.Sarvesh Sir  ---> InOrganic Chemistry (Teaching Experience more than 20 years)\n");
    printf("\t\t3.Rajesh Sir   ---> Physical Chemistry (Teaching Experience more than 20 years)\n");
    printf("\t\t4.Rajendra Sir ---> Physics (Teaching Experience more than 10 years)\n");
    printf("\t\t5.Gauri Madam  ---> Maths (Teaching Experience more than 15 years)\n");
    printf("\t\t6.Varsha Madam ---> Biology (Teaching Experience more than 15 years)\n");
    printf("\t\t7.Bhoomi Madam ---> Zoology (Teaching Experience more than 15 years)\n");
    printf("\n\n");
    centerPrint("=============== Aggregate (Overall) Passing Percentage and Result ===============\n\n");
    printf("\t\tMore than 95%   : 30  students (16.7%)\n");
    printf("\t\tMore than 90%   : 50  students (27.7%)\n");
    printf("\t\tMore than 85%   : 60  students (33.3%)\n");
    printf("\t\tMore than 80%   : 40  students (22.3%)\n");
    printf("\t\tDistinction     : 180 students (all) (100%)\n");
    printf("\n\n");
    centerPrint("=============== Our Location (Branches) ===============\n\n");
    printf("\t\t1.Andheri W (SV ROAD)\n");
    printf("\t\t2.Lower Parel (Near Station)\n");
    printf("\t\t3.Borivali W (Yogi Nagar)\n");
    printf("\t\t4.Churchgate (Trident Square)\n");
    printf("\n\n");
    centerPrint("=============== FEES STRUCTURE ===============\n\n");
    printf("\t\tHere Below are some of the packages of paying fee \n\n ");
    printf("\t\tFees : Rs 2,00,000/- only (Two Lakhs) (11th and 12th Combined)\n");
    printf("\t\t Option 1. -> Rs 8,333 /- EMI (till 24 months)\n");
    printf("\t\t Option 2. -> 50 percent at the time of admission and remaining 50 percent after completion of one successful year\n");
    printf("\t\t all at once By Cash , Credit Card or Debit Card Or UPI / Gpay\n");
    printf("\t\tAll of The further procedure will be done offline\n");
    printf("\n\n");
    return 0;
}
int nurture()
{
    INTEGRATEDall();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> nurtureTutorials@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> nurtureTutorialsOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://nurtureTutorials.com \n");
    printf("\n\n");
    return 0;
}
int unacademy()
{
    INTEGRATEDall();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> unacademy@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> UnacademyOFFICIAL\n");
    printf("\t\tWebsite                            ----> https://unacademy.com \n");
    printf("\n\n");
    return 0;
}
int PWclass()
{
    INTEGRATEDall();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> PWadm@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> PWOFFICIAL\n");
    printf("\t\tWebsite                            ----> https://physicsWallah.com \n");
    printf("\n\n");
    return 0;
}
int ALLENclass()
{
    INTEGRATEDall();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> allenJEEadm@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> ALLENjeeNEETOFFICIAL\n");
    printf("\t\tWebsite                            ----> https://allen.com \n");
    printf("\n\n");
    return 0;
}
int FIIT()
{
    INTEGRATEDall();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details  ----> 1234567890\n");
    printf("\t\tOur G-mail                        ----> fiitJEEadm@gmail.com\n");
    printf("\t\tInstagram and Facebook            ----> FIITjeeOFFICIAL\n");
    printf("\t\tWebsite                           ----> https://fiitjee.com \n");
    printf("\n\n");
    return 0;
}
// INTEGRATED END
// Diploma Start
// computer
int DiploComm()
{
    centerPrint("=============== Welcome to the Result Section of our Institute ===============\n\n");
    printf("\t\tHere Below is the result of the Academic Year 2021 2022 \n\n ");
    printf("\t\tTOPPERS : \n");
    printf("\t\tParam Mehta     : 99.40% (DSA) \n");
    printf("\t\tMohammed Shaikh : 99.30% (Website Designing) \n");
    printf("\t\tKaran Kumar     : 99.10% (Artificial Intelligence) \n");
    printf("\t\tNitesh Shah     : 98.50% (Cloud Computing) \n");
    printf("\t\tKrishna Kumar   : 99.90% (Applied Mathematics) \n");
    printf("\t\tMohan Varma     : 99.60% (Fundamentals of Scripting Language) \n");
    printf("\t\tSuresh Sharma   : 99.50% (Fundamentals of Operating System)  \n");
    printf("\t\tRajesh Panchal  : 99.20% (Engineering Graphics)  \n");
    printf("\t\tSuresh Mistry   : 99.40% (Basic Mathematics)  \n");
    printf("\t\tRamesh Shah     : 99.70% (Basic of Electonics)  \n");
    printf("\n\n");
    centerPrint("=============== Our Faculties ===============\n\n");
    printf("\t\t1.Hitesh Sir    ---> Fundamental of Operating System (Teaching Experience more than 20 years)\n");
    printf("\t\t2.Pankaj Sir    ---> DSA (Teaching Experience more than 20 years)\n");
    printf("\t\t3.Dhramesh Sir  ---> Cloud Computing (Teaching Experience more than 20 years)\n");
    printf("\t\t4.Rajendra Sir  ---> Front-end Web Development (Teaching Experience more than 10 years)\n");
    printf("\t\t5.Gauri Madam   ---> Basics of Electronics (Teaching Experience more than 15 years)\n");
    printf("\t\t6.Varsha Madam  ---> Skill Development (Teaching Experience more than 15 years)\n");
    printf("\n\n");
    centerPrint("=============== Aggregate (Overall) Passing Percentage and Result ===============\n\n");
    printf("\t\tMore than 95%   : 60  students (20%)\n");
    printf("\t\tMore than 90%   : 90  students (30%)\n");
    printf("\t\tMore than 85%   : 100  students (33.3%)\n");
    printf("\t\tMore than 80%   : 50  students (16.67%)\n");
    printf("\t\tDistinction     : 120 students (all) (100%)\n");
    centerPrint("=============== FEES STRUCTURE ===============\n\n");
    printf("\t\tHere Below are some of the packages of paying fee \n\n ");
    printf("\t\tFees : Rs 1,70,000/- only (One Lakh 70 Thousand) \n");
    printf("\t\tOption 1. -> Rs 14,176 /- EMI (till 12 months)\n");
    printf("\t\tOption 2. -> 50 percent at the time of admission and remaining 50 percent after completion of one successful year\n");
    printf("\t\tOption 3. -> EBC (Economic Backward Class) (Basic Documents such as Income Certificate and income of less than 8 lakhs per annum ,Domicile Certificate)\n");
    printf("\t\tall at once By Cash , Credit Card or Debit Card Or UPI / Gpay\n");
    printf("\t\tAll of The further procedure will be done offline\n");
    printf("\n\n");
    return 0;
}
// bhagubhai Comp
int bhagubhaiComp()
{
    DiploComm();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> BHAGUBHAIComp@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Bhagubhai_on_Web\n");
    printf("\t\tWebsite                            ----> https://sbmp.ac.in/ \n");
    printf("\n\n");
    return 0;
}
// kj Comp
int kjComp()
{
    DiploComm();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> KJSCEComp@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> KJSCE_on_Web\n");
    printf("\t\tWebsite                            ----> https://kjsce.somaiya.edu/en \n");
    printf("\n\n");
    return 0;
}
// spit comp
int spitComp()
{
    DiploComm();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> SPITComp@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Spit_on_Web\n");
    printf("\t\tWebsite                            ----> https://www.spit.ac.in/ \n");
    printf("\n\n");
    return 0;
}
// govt comp
int govtComp()
{
    DiploComm();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> GovtComp@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Govt_Polytechnic_on_Web\n");
    printf("\t\tWebsite                            ----> https://gpmumbai.ac.in/gpmweb/ \n");
    printf("\n\n");
    return 0;
}
// thakur comp
int thakurComp()
{
    DiploComm();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> ThakurComp@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Thakur_on_Web\n");
    printf("\t\tWebsite                            ----> https://www.tcetmumbai.in/ \n");
    printf("\n\n");
    return 0;
}
// ELECTRIC COMMON
int ELECTRICcommon()
{
    centerPrint("=============== Welcome to the Result Section of our Institute ===============\n\n");
    printf("\t\tHere Below is the result of the Academic Year 2021 2022 \n\n ");
    printf("\t\tTOPPERS : \n");
    printf("\t\tParam Mehta     : 99.40% (Applied Mathematics) \n");
    printf("\t\tMohammed Shaikh : 99.30% (Applied Physics) \n");
    printf("\t\tKaran Kumar     : 99.10% (Applied Chemistry) \n");
    printf("\t\tNitesh Shah     : 98.50% (Digital Electronics) \n");
    printf("\t\tKrishna Kumar   : 99.90% (Applied Electrical Engineering) \n");
    printf("\t\tMohan Varma     : 99.60% (Design of Electrical Machines) \n");
    printf("\t\tSuresh Sharma   : 99.50% (Advanced Control Systems)  \n");
    printf("\t\tRajesh Panchal  : 99.20% (Engineering Graphics)  \n");
    printf("\t\tSuresh Mistry   : 99.40% (Basic Mathematics)  \n");
    printf("\t\tRamesh Shah     : 99.70% (Basic of Electonics)  \n");
    printf("\n\n");
    centerPrint("=============== Our Faculties ===============\n\n");
    printf("\t\t1.Hitesh Sir    ---> Applied Electrical Engineering (Teaching Experience more than 20 years)\n");
    printf("\t\t2.Pankaj Sir    ---> Engineering Chemistry (Teaching Experience more than 20 years)\n");
    printf("\t\t3.Dhramesh Sir  ---> Electrical Machines (Teaching Experience more than 20 years)\n");
    printf("\t\t4.Rajendra Sir  ---> Digital Signal Processing (Teaching Experience more than 10 years)\n");
    printf("\t\t5.Gauri Madam   ---> Basics of Electronics (Teaching Experience more than 15 years)\n");
    printf("\t\t6.Varsha Madam  ---> Advanced Control Systems (Teaching Experience more than 15 years)\n");
    printf("\n\n");
    centerPrint("=============== Aggregate (Overall) Passing Percentage and Result ===============\n\n");
    printf("\t\tMore than 95%   : 60  students (20%)\n");
    printf("\t\tMore than 90%   : 90  students (30%)\n");
    printf("\t\tMore than 85%   : 100  students (33.3%)\n");
    printf("\t\tMore than 80%   : 50  students (16.67%)\n");
    printf("\t\tDistinction     : 120 students (all) (100%)\n");
    centerPrint("=============== FEES STRUCTURE ===============\n\n");
    printf("\t\tHere Below are some of the packages of paying fee \n\n ");
    printf("\t\tFees : Rs 10,000/- only (Ten Thousand) \n");
    printf("\t\tOption 1. -> Rs 833 /- EMI (till 12 months)\n");
    printf("\t\tOption 2. -> 50 percent at the time of admission and remaining 50 percent after completion of one successful year\n");
    printf("\t\tOption 3. -> EBC (Economic Backward Class) (Basic Documents such as Income Certificate and income of less than 8 lakhs per annum ,Domicile Certificate)\n");
    printf("\t\tall at once By Cash , Credit Card or Debit Card Or UPI / Gpay\n");
    printf("\t\tAll of The further procedure will be done offline\n");
    printf("\n\n");
    return 0;
}
// bhagubhai elec
int bhagubhaiELEC()
{
    ELECTRICcommon();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> BHAGUBHAIELEC@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Bhagubhai_on_Web\n");
    printf("\t\tWebsite                            ----> https://sbmp.ac.in/ \n");
    printf("\n\n");
    return 0;
}
// kj elec
int kjELEC()
{
    ELECTRICcommon();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> KJSCEelec@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> KJSCE_on_Web\n");
    printf("\t\tWebsite                            ----> https://kjsce.somaiya.edu/en \n");
    printf("\n\n");
    return 0;
}
// spit elec
int spitELEC()
{
    ELECTRICcommon();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> SPITElec@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Spit_on_Web\n");
    printf("\t\tWebsite                            ----> https://www.spit.ac.in/ \n");
    printf("\n\n");
    return 0;
}
// govt elec
int govtELEC()
{
    ELECTRICcommon();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> GovtELEC@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Govt_Polytechnic_on_Web\n");
    printf("\t\tWebsite                            ----> https://gpmumbai.ac.in/gpmweb/ \n");
    printf("\n\n");
    return 0;
}
// thakur ELEC
int thakurELEC()
{
    ELECTRICcommon();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> ThakurELEC@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Thakur_on_Web\n");
    printf("\t\tWebsite                            ----> https://www.tcetmumbai.in/ \n");
    printf("\n\n");
    return 0;
}
// diploma mechanical
int mechanicalCOMMON()
{
    centerPrint("=============== Welcome to the Result Section of our Institute ===============\n\n");
    printf("\t\tHere Below is the result of the Academic Year 2021 2022 \n\n ");
    printf("\t\tTOPPERS : \n");
    printf("\t\tSuresh Mistry   : 99.40% (Engineering Graphics) \n");
    printf("\t\tRamesh Shah     : 99.70% (Applied Physics)\n");
    printf("\t\tNitesh Shah     : 98.50% (Applied Mathematics)  \n");
    printf("\t\tParam Mehta     : 99.40% (Applied Chemistry)\n");
    printf("\t\tMohammed Shaikh : 99.30% (Fundamentals of Mechanical Engineering)\n");
    printf("\t\tKaran Kumar     : 99.10% (Machine Drawing)\n");
    printf("\t\tKrishna Kumar   : 99.90% (Material Science and Engineering) \n");
    printf("\t\tMohan Varma     : 99.60% (Workshop Practice)\n");
    printf("\t\tSuresh Sharma   : 99.50% (Fluid Mechanics) \n");
    printf("\t\tRajesh Panchal  : 99.20% (Automation and Control) \n");
    printf("\n\n");
    centerPrint("=============== Our Faculties ===============\n\n");
    printf("\t\t1.Hitesh Sir    ---> Engineering Drawing (Teaching Experience more than 20 years)\n");
    printf("\t\t2.Pankaj Sir    ---> Engineering Maths (Teaching Experience more than 20 years)\n");
    printf("\t\t3.Dhramesh Sir  ---> Fundamentals of Mechanical Engineering (Teaching Experience more than 20 years)\n");
    printf("\t\t4.Rajendra Sir  ---> General Chemistry (Teaching Experience more than 10 years)\n");
    printf("\t\t5.Gauri Madam   ---> Machine Drawing (Teaching Experience more than 15 years)\n");
    printf("\t\t6.Varsha Madam  ---> Basic Electronics and Electronic Circuits (Teaching Experience more than 15 years)\n");
    printf("\n\n");
    centerPrint("=============== Aggregate (Overall) Passing Percentage and Result ===============\n\n");
    printf("\t\tMore than 95%   : 20  students (16.67%)\n");
    printf("\t\tMore than 90%   : 40  students (33.3%)\n");
    printf("\t\tMore than 85%   : 50  students (41.7%)\n");
    printf("\t\tMore than 80%   : 10  students (8.33%)\n");
    printf("\t\tDistinction     : 120 students (all) (100%)\n");
    centerPrint("=============== FEES STRUCTURE ===============\n\n");
    printf("\t\tHere Below are some of the packages of paying fee \n\n ");
    printf("\t\tFees : Rs 10,000/- only (Ten Thousand) \n");
    printf("\t\tOption 1. -> Rs 833 /- EMI (till 12 months)\n");
    printf("\t\tOption 2. -> 50 percent at the time of admission and remaining 50 percent after completion of one successful year\n");
    printf("\t\tOption 3. -> EBC (Economic Backward Class) (Basic Documents such as Income Certificate and income of less than 8 lakhs per annum ,Domicile Certificate)\n");
    printf("\t\tall at once By Cash , Credit Card or Debit Card Or UPI / Gpay\n");
    printf("\t\tAll of The further procedure will be done offline\n");
    printf("\n\n");
    return 0;
}
int bhagubhaiMECHANICAL()
{
    mechanicalCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> BhagubhaiMech@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Bhagubhai_on_Web\n");
    printf("\t\tWebsite                            ----> https://sbmp.ac.in \n");
    printf("\n\n");
    return 0;
}
int governmentMECHANICAL()
{
    mechanicalCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> GovtMech@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Govt_Polytechnic_on_Web\n");
    printf("\t\tWebsite                            ----> https://gpmumbai.ac.in/gpmweb/\n");
    printf("\n\n");
    return 0;
}
int thakurMECHANICAL()
{
    mechanicalCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> ThakurMech@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Thakur_on_Web\n");
    printf("\t\tWebsite                            ----> https://www.tcetmumbai.in/ \n");
    printf("\n\n");
    return 0;
}
int spitMECHANICAL()
{
    mechanicalCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> SPITMech@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Spit_on_Web\n");
    printf("\t\tWebsite                            ----> https://www.spit.ac.in/ \n");
    printf("\n\n");
    return 0;
}
int kjMECHANICAL()
{
    mechanicalCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> KJSCEMech@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> KJSCE_on_Web\n");
    printf("\t\tWebsite                            ----> https://kjsce.somaiya.edu/en  \n");
    printf("\n\n");
    return 0;
}
// mechanical end
// chemical start
int chemicalCOMMON()
{
    centerPrint("=============== Welcome to the Result Section of our Institute ===============\n\n");
    printf("\t\tHere Below is the result of the Academic Year 2021 2022 \n\n ");
    printf("\t\tTOPPERS : \n");
    printf("\t\tNitesh Shah     : 98.50%  (Applied Chemistry)\n");
    printf("\t\tParam Mehta     : 99.40%  (Material Science)n");
    printf("\t\tMohammed Shaikh : 99.30%  (Fluid Mechanics)\n");
    printf("\t\tKaran Kumar     : 99.10%  (Thermodynamics)\n");
    printf("\t\tKrishna Kumar   : 99.90%  (Applied Biology)\n");
    printf("\t\tMohan Varma     : 99.60%  (Engineering Maths)\n");
    printf("\t\tSuresh Sharma   : 99.50%  (Basics of Chemical Engineering)\n");
    printf("\t\tRajesh Panchal  : 99.20%  (Introduction to Chemicals)\n");
    printf("\t\tSuresh Mistry   : 99.40%  (NanoTechnology)\n");
    printf("\t\tRamesh Shah     : 99.70%  (Chemical Kinetics)\n");
    printf("\n\n");
    centerPrint("=============== Our Faculties ===============\n\n");
    printf("\t\t1.Hitesh Sir    ---> Applied Chemistry (Teaching Experience more than 20 years)\n");
    printf("\t\t2.Pankaj Sir    ---> NanoTechnology (Teaching Experience more than 20 years)\n");
    printf("\t\t3.Dhramesh Sir  ---> Thermodynamics (Teaching Experience more than 20 years)\n");
    printf("\t\t4.Rajendra Sir  ---> General Chemistry (Teaching Experience more than 10 years)\n");
    printf("\t\t5.Gauri Madam   ---> Applied Biology (Teaching Experience more than 15 years)\n");
    printf("\t\t6.Varsha Madam  ---> Engineering Maths (Teaching Experience more than 15 years)\n");
    printf("\n\n");
    centerPrint("=============== Aggregate (Overall) Passing Percentage and Result ===============\n\n");
    printf("\t\tMore than 95%   : 20  students (16.67%)\n");
    printf("\t\tMore than 90%   : 40  students (33.3%)\n");
    printf("\t\tMore than 85%   : 50  students (41.7%)\n");
    printf("\t\tMore than 80%   : 10  students (8.33%)\n");
    printf("\t\tDistinction     : 120 students (all) (100%)\n");
    centerPrint("=============== FEES STRUCTURE ===============\n\n");
    printf("\t\tHere Below are some of the packages of paying fee \n\n ");
    printf("\t\tFees : Rs 10,000/- only (Ten Thousand) \n");
    printf("\t\tOption 1. -> Rs 833 /- EMI (till 12 months)\n");
    printf("\t\tOption 2. -> 50 percent at the time of admission and remaining 50 percent after completion of one successful year\n");
    printf("\t\tOption 3. -> EBC (Economic Backward Class) (Basic Documents such as Income Certificate and income of less than 8 lakhs per annum ,Domicile Certificate)\n");
    printf("\t\tall at once By Cash , Credit Card or Debit Card Or UPI / Gpay\n");
    printf("\t\tAll of The further procedure will be done offline\n");
    printf("\n\n");
    return 0;
}
// bhagubhai chem
int bhagubhaiCHEM()
{
    chemicalCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> BhagubhaiChem@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Bhagubhai_on_Web\n");
    printf("\t\tWebsite                            ----> https://sbmp.ac.in \n");
    printf("\n\n");
    return 0;
}
// government chem
int governCHEM()
{
    chemicalCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> GovtChem@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Govt_Polytechnic_on_Web\n");
    printf("\t\tWebsite                            ----> https://gpmumbai.ac.in/gpmweb/\n");
    printf("\n\n");
    return 0;
}
// thakur chem
int thakurCHEM()
{
    chemicalCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> ThakurChem@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Thakur_Polytechnic_on_Web\n");
    printf("\t\tWebsite                            ----> https://www.tpolymumbai.in/\n");
    printf("\n\n");
    return 0;
}
// SPIT chem
int spitCHEM()
{
    chemicalCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> SPITChem@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> SPIT_on_Web\n");
    printf("\t\tWebsite                            ----> https://www.spit.ac.in/\n");
    printf("\n\n");
    return 0;
}
// KJ chem
int kjCHEM()
{
    chemicalCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> KJChem@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> KJ_on_Web\n");
    printf("\t\tWebsite                            ----> https://polytechnic.somaiya.edu.in/polytechnic\n");
    printf("\n\n");
    return 0;
}
// diploIT
int itCOMMON()
{
    centerPrint("=============== Welcome to the Result Section of our Institute ===============\n\n");
    printf("\t\tHere Below is the result of the Academic Year 2021 2022 \n\n ");
    printf("\t\tTOPPERS : \n");
    printf("\t\tNitesh Shah     : 98.50%  (Applied Chemistry)\n");
    printf("\t\tParam Mehta     : 99.40%  (Material Science)n");
    printf("\t\tMohammed Shaikh : 99.30%  (Fluid Mechanics)\n");
    printf("\t\tKaran Kumar     : 99.10%  (Thermodynamics)\n");
    printf("\t\tKrishna Kumar   : 99.90%  (Applied Biology)\n");
    printf("\t\tMohan Varma     : 99.60%  (Engineering Maths)\n");
    printf("\t\tSuresh Sharma   : 99.50%  (Basics of Chemical Engineering)\n");
    printf("\t\tRajesh Panchal  : 99.20%  (Introduction to Chemicals)\n");
    printf("\t\tSuresh Mistry   : 99.40%  (NanoTechnology)\n");
    printf("\t\tRamesh Shah     : 99.70%  (Chemical Kinetics)\n");
    printf("\n\n");
    centerPrint("=============== Our Faculties ===============\n\n");
    printf("\t\t1.Hitesh Sir    ---> Applied Chemistry (Teaching Experience more than 20 years)\n");
    printf("\t\t2.Pankaj Sir    ---> NanoTechnology (Teaching Experience more than 20 years)\n");
    printf("\t\t3.Dhramesh Sir  ---> Thermodynamics (Teaching Experience more than 20 years)\n");
    printf("\t\t4.Rajendra Sir  ---> General Chemistry (Teaching Experience more than 10 years)\n");
    printf("\t\t5.Gauri Madam   ---> Applied Biology (Teaching Experience more than 15 years)\n");
    printf("\t\t6.Varsha Madam  ---> Engineering Maths (Teaching Experience more than 15 years)\n");
    printf("\n\n");
    centerPrint("=============== Aggregate (Overall) Passing Percentage and Result ===============\n\n");
    printf("\t\tMore than 95%   : 20  students (16.67%)\n");
    printf("\t\tMore than 90%   : 40  students (33.3%)\n");
    printf("\t\tMore than 85%   : 50  students (41.7%)\n");
    printf("\t\tMore than 80%   : 10  students (8.33%)\n");
    printf("\t\tDistinction     : 120 students (all) (100%)\n");
    centerPrint("=============== FEES STRUCTURE ===============\n\n");
    printf("\t\tHere Below are some of the packages of paying fee \n\n ");
    printf("\t\tFees : Rs 1,70,000/- only (One Lakh 70 Thousand) \n");
    printf("\t\tOption 1. -> Rs 14,176 /- EMI (till 12 months)\n");
    printf("\t\tOption 2. -> 50 percent at the time of admission and remaining 50 percent after completion of one successful year\n");
    printf("\t\tOption 3. -> EBC (Economic Backward Class) (Basic Documents such as Income Certificate and income of less than 8 lakhs per annum ,Domicile Certificate)\n");
    printf("\t\tall at once By Cash , Credit Card or Debit Card Or UPI / Gpay\n");
    printf("\t\tAll of The further procedure will be done offline\n");
    printf("\n\n");
    return 0;
}
int bhagubhaicollegeIT()
{
    itCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> BhagubhaiIT@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Bhagubhai_on_Web\n");
    printf("\t\tWebsite                            ----> https://sbmp.ac.in \n");
    printf("\n\n");
    return 0;
}
int governcollegeIT()
{
    itCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> GovtIT@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Govt_Polytechnic_on_Web\n");
    printf("\t\tWebsite                            ----> https://gpmumbai.ac.in/gpmweb/\n");
    printf("\n\n");
    return 0;
}
int spitcollegeIT()
{
    itCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> SPITit@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> SPIT_on_Web\n");
    printf("\t\tWebsite                            ----> https://www.spit.ac.in/\n");
    printf("\n\n");
    return 0;
}
int thakurcollegeIT()
{
    itCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> ThakurIT@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> Thakur_Polytechnic_on_Web\n");
    printf("\t\tWebsite                            ----> https://www.tpolymumbai.in/\n");
    printf("\n\n");
    return 0;
}
int kjcollegeIT()
{
    itCOMMON();
    centerPrint("=============== Further Details ===============");
    printf("\t\tCall this number for any details   ----> 1234567890\n");
    printf("\t\tOur G-mail                         ----> KJit@gmail.com\n");
    printf("\t\tInstagram and Facebook             ----> KJ_on_Web\n");
    printf("\t\tWebsite                            ----> https://polytechnic.somaiya.edu.in/polytechnic\n");
    printf("\n\n");
    return 0;
}
// function for login signup
int num_users = 0;
// loading the previous user
void load_users()
{
    FILE *fp;
    char username[20], password[20];
    fp = fopen("users.txt", "r");
    if (fp == NULL)
    {
        return;
    }
    while (fscanf(fp, "%s %s", username, password) != EOF) // reading two string from the file until the end of the fule is reached
    {
        strcpy(users[num_users].username, username); // copies username stored in array in variable username
        strcpy(users[num_users].password, password);
        num_users++; // increment user by 1
    }
    fclose(fp);
}
// saving the new users
void save_users()
{
    FILE *fp;
    fp = fopen("users.txt", "w");
    if (fp == NULL)
    {
        printf("Error: could not save users.\n");
        return;
    }
    for (int i = 0; i < num_users; i++)
    {
        fprintf(fp, "%s %s\n", users[i].username, users[i].password);
    }
    fclose(fp);
}
// signing up
void signup()
{
    centerPrint("-------You are at the HomeScreen-------\n");
    char username[20], password[20];
signup:
    printf("Enter username: ");
    scanf("%s", username);
    for (int i = 0; i < num_users; i++)
    {
        if (strcmp(users[i].username, username) == 0)
        {
            printf("Error: username already exists.\n");
            printf("\n\n");
            printf("Please enter the other username which user had not previously taken.\n");
            printf("\n\n");
            goto signup;
            return;
        }
    }
    printf("Enter password: ");
    scanf("%s", password);
    strcpy(users[num_users].username, username);
    strcpy(users[num_users].password, password);
    num_users++;
    save_users();
    system("cls");
    Sleep(5);
    printf("User created Succesfully\n");
}

// reset password
void reset_password()
{

    centerPrint("-------You are at the Reset Password Page-------\n");

    char username[20];
reset:
    printf("Enter username: ");
    scanf("%s", username);
    for (int i = 0; i < num_users; i++)
    {
        if (strcmp(users[i].username, username) == 0)
        {
            char password[20];
            printf("Enter new password: ");
            scanf("%s", password);
            strcpy(users[i].password, password);
            save_users();
            printf("Password reset.\n");
            // Sleep(5);
            // system("cls");
            return;
        }
    }
    printf("Error: username not found.\n");
    goto reset;
}
// form
// collecting userDetails
void collectUserDetails(struct UserInfo *user)
{
    fflush(stdin);
    printf("Enter your name: ");
    fgets(user->name, 100, stdin);
    user->name[strcspn(user->name, "\n")] = '\0';

    printf("Enter your email address: ");
    fgets(user->email, 100, stdin);
    user->email[strcspn(user->email, "\n")] = '\0';

    printf("Enter your address: ");
    fgets(user->address, 100, stdin);
    user->address[strcspn(user->address, "\n")] = '\0';

    printf("Enter your phone number: ");
    fgets(user->phone, 100, stdin);
    user->phone[strcspn(user->phone, "\n")] = '\0';

    printf("Enter your marks in Science(outoff 100): ");
    fgets(user->marks_sci, 10, stdin);
    user->marks_sci[strcspn(user->marks_sci, "\n")] = '\0';

    printf("Enter your marks in Maths(outoff 100): ");
    fgets(user->marks_math, 10, stdin);
    user->marks_math[strcspn(user->marks_math, "\n")] = '\0';

    printf("Enter your marks in English(outoff 100): ");
    fgets(user->marks_english, 10, stdin);
    user->marks_english[strcspn(user->marks_english, "\n")] = '\0';

    printf("Enter your total marks(outoff 500): ");
    fgets(user->total_marks, 10, stdin);
    user->total_marks[strcspn(user->total_marks, "\n")] = '\0';

    fflush(stdin);
}

void displayForm(struct UserInfo user)
{
    centerPrint("===================================\n");
    centerPrint("User Information:\n");
    centerPrint("===================================\n");
    printf("\n\n");
    printf("===================================\n");

    printf("\nName: %s\n\n", user.name);
    printf("Email Address: %s\n\n", user.email);
    printf("Address: %s\n\n", user.address);
    printf("Phone Number: %s\n\n", user.phone);
    printf("Marks in Science:%s\n\n", user.marks_sci);
    printf("Marks in Maths:%s\n\n", user.marks_math);
    printf("Marks in English:%s\n\n", user.marks_english);
    printf("Total Marks (outoff 500):%s\n\n", user.total_marks);
    printf("===================================\n");
}
void saveToFile(struct UserInfo user)
{
    char fileName[100];
    printf("Please enter a file name: ");
    fgets(fileName, 100, stdin);
    fileName[strcspn(fileName, "\n")] = '\0';

    FILE *file = fopen(fileName, "w");
    if (file == NULL)
    {
        printf("Error: Unable to create file.\n");
        return;
    }

    fprintf(file, "Name: %s\n", user.name);
    fprintf(file, "Email Address: %s\n", user.email);
    fprintf(file, "Address: %s\n", user.address);
    fprintf(file, "Phone Number: %s\n", user.phone);
    fprintf(file, "Marks in Sci: %s\n", user.marks_sci);
    fprintf(file, "Marks in English: %s\n", user.marks_english);
    fprintf(file, "Marks in Maths: %s\n", user.marks_math);
    fprintf(file, "Total Marks: %s\n", user.total_marks);

    fclose(file);
    printf("File saved successfully.\n");
}
void displayAllResponses(struct UserInfo users[], int numUsers)
{

    printf("===================================\n");
    printf("All User Information:\n");
    printf("===================================\n");
    for (int i = 0; i < numUsers; i++)
    {
        printf("User %d:\n", i + 1);
        displayForm(users[i]);
        printf("\n");
    }
}

// logging in
int login()
{
    centerPrint("-------You are at the Login Page-------\n");
    char username[20], password[20];
    struct UserInfo users1[MAX_USERS];
    int numUsers = 0;
    int inputOVERALL, integratedIN, admissionFIIT, num1, num_seats_intg_fiit, num_seats_intg_allen, admissionALLEN, admissionPW, num_seats_intg_pw, admissionUNACADEMY, num_seats_intg_unacademy, admissionNURTURE, num_seats_intg_nurture, inputSCIENCE, GOVERNMENT, num_seats_sci_govt, CHILDRENs, num_seats_sci_childrens, XAVIERs, num_seats_sci_xav, MUMBAI, num_seats_sci_mum, TATA, num_seats_sci_tata, comm, comm10, NM, num_seats_comm_nm, Mithibai, num_seats_comm_mithibai, N, num_seats_comm_n, MK, num_seats_comm_mk, KES, num_seats_comm_kes, comm20, NM1, num_seats_comm_nm1, Mithibai1, num_seats_comm_mithibai1, N1, num_seats_comm_n1, MK1, num_seats_comm_mk1, KES1, num_seats_comm_kes1, arts, artsHUM, artistic, num_seats_arts_artistic, mithibaiClg, num_seats_arts_mithibaiClg, pioneerCLG, num_seats_arts_poineerClg, BK, num_seats_arts_BK, fergusson, num_seats_arts_fergusson, artsCOMP, STJohns, num_seats_arts_stjohns, MithiBAICOMP, num_seats_arts_mithibaicomp, JK, num_seats_arts_jk, BKclg, num_seats_arts_BKclg, madinconINPUT, madison, num_seats_arts_madison, num_seats_arts_pioneerClg, diplomaALL, bhagubhai, num_seats_dip_bhagubhai, comp, government, num_seats_dip_govt, thakur, num_seats_dip_thakur, spit, num_seats_dip_spit, kj, num_seats_dip_kj, diploIT, bhagubhaiIT, num_seats_dip_bhagubhaiit, governmentIT, num_seats_dip_govtit, ThakurIT, num_seats_dip_thakurit, spitIT, num_seats_dip_spitit, kjIT, num_seats_dip_kjit, diploElect, bhagubhaielectric, num_seats_dip_bhagubhaielec, governmentelectric, num_seats_dip_govtelec, Thakurelectric, num_seats_dip_thakurelec, spitelectric, num_seats_dip_spitelec, kjelectric, num_seats_dip_kjelec, mech, bhagubhaimech, num_seats_dip_bhagubhaimech, governmentmech, num_seats_dip_governmentmech, Thakurmech, num_seats_dip_thakurmech, spitmech, num_seats_dip_spitmech, kjmech, num_seats_dip_kjmech, chem, bhagubhaichem, num_seats_dip_bhagubhaichem, governmentchem, num_seats_dip_govtchem, Thakurchem, num_seats_dip_thakurchem, spitchem, num_seats_dip_spitchem, kjchem, num_seats_dip_kjchem;
    char choice_seats[10], choice_seats_admissionALLEN[10], choice_seats_admissionPW[10], choice_seats_admissionUNACADEMY[10], choice_seats_admissionNURTURE[10];
    int tries = 0;
    int choice;
    while (tries < 3)
    {
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);
        for (int i = 0; i < num_users; i++)
        {
            if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0)
            {
                printf("Login Succesfull\n");

                // Admission Portal
                centerPrint("===============Welcome to Maharashtra Board 11th Admission Portal ===============\n\n");
                printf("\t\tPress 1 for Admission in Science field\n");
                printf("\t\tPress 2 for Admission in Commerce field\n");
                printf("\t\tPress 3 for Admission in Arts field\n");
                printf("\t\tPress 4 for Admission in Diploma field\n");
                printf("\t\tPress 5 to exit\n");
                printf("\t\tEnter your choice: ");

                scanf("%d", &inputOVERALL);
                switch (inputOVERALL)
                {
                case 1:
                    system("cls");
                    // int num1;
                    printf("\t\tPress 1 for Integrated\n");
                    printf("\t\tPress 2 for High School\n");
                    printf("\t\tEnter your choice: ");

                    scanf("%d", &num1);
                    switch (num1)
                    {
                    case 1:
                        system("cls");
                        centerPrint("===============Welcome to Admission Portal in Integrated 11th Science===============\n\n\n");
                        printf("\t\tHere Below ,some offline coaching centres are mentioned where you can take admission in \n ");
                        printf("\t\tAll the Coaching classes offer courses of PCM , PCB , PCMB\n");
                        printf("\t\tPress any of the 5 options\n");
                        printf("\t\t1.FIIT JEE\n");
                        printf("\t\t2.Allen coaching classes\n");
                        printf("\t\t3.Physics Wallah\n");
                        printf("\t\t4.Unacademy\n");
                        printf("\t\t5.Nurture Tutorials\n");
                        printf("\t\tEnter your choice: ");

                        scanf("%d", &integratedIN);
                        switch (integratedIN)
                        {
                        case 1:
                            system("cls");
                            int choice_fiit;
                        fiitAdmission:
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of FIIT JEE (miscellaneous)\n");
                            printf("\t\tpress 3 to exit\n");
                            printf("\t\tEnter your choice: ");

                            scanf("%d", &admissionFIIT);
                            switch (admissionFIIT)
                            {
                            case 1:
                                printf("\t\tEnter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_intg_fiit);
                                if (num_seats_intg_fiit == 1)
                                {
                                    reserve_seats_intg_fiit(num_seats_intg_fiit);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_intg_fiit == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_intg_fiit(num_seats_intg_fiit);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                FIIT();
                                printf("\n\n");
                            fiitAdmission1:
                                printf("\t\tPress 1 to go to FIIT Admission Panel or 0 to exit : ");

                                scanf("%d", &choice_fiit);
                                if (choice_fiit == 1)
                                {
                                    system("cls");
                                    goto fiitAdmission;
                                }
                                else if (choice_fiit == 0)
                                {
                                    printf("===Thank you for showing interest in us===\n");
                                    printf("===We hope to see you soon in our premises===\n");
                                    exit(1);
                                }
                                else
                                {
                                    printf("\t\tError! Invalid Input");
                                    printf("\n\n");
                                    goto fiitAdmission1;
                                }
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                // goto starting1;
                                break;
                            }
                            break;
                        case 2:
                            system("cls");
                            // starting2:
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Allen coaching classes (miscellaneous)\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &admissionALLEN);
                            switch (admissionALLEN)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_intg_allen);
                                if (num_seats_intg_allen == 1)
                                {
                                    reserve_seats_intg_allen(num_seats_intg_allen);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_intg_allen == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_intg_allen(num_seats_intg_allen);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                ALLENclass();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                //   goto starting2;
                                break;
                            }
                            break;
                        case 3:
                            system("cls");
                            // starting3:
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Physics Wallah (miscellaneous)\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &admissionPW);
                            switch (admissionPW)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_intg_pw);
                                if (num_seats_intg_pw == 1)
                                {
                                    reserve_seats_intg_pw(num_seats_intg_pw);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_intg_pw == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_intg_pw(num_seats_intg_pw);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                PWclass();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                                // goto starting3;
                            }
                            break;
                        case 4:
                            system("cls");
                            // starting4:
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Unacademy (miscellaneous)\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &admissionUNACADEMY);
                            switch (admissionUNACADEMY)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_intg_unacademy);
                                if (num_seats_intg_unacademy == 1)
                                {
                                    reserve_seats_intg_unacademy(num_seats_intg_unacademy);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_intg_unacademy == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_intg_unacademy(num_seats_intg_unacademy);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                unacademy();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                // goto starting4;
                                break;
                            }
                            break;
                        case 5:
                            system("cls");
                            // starting5:
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Nurture Tutorials (miscellaneous)\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &admissionNURTURE);
                            switch (admissionNURTURE)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_intg_nurture);
                                if (num_seats_intg_nurture == 1)
                                {
                                    reserve_seats_intg_nurture(num_seats_intg_nurture);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_intg_nurture == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_intg_nurture(num_seats_intg_nurture);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                nurture();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                //  goto starting5;
                                break;
                            }
                            break;
                        default:
                            defaultSWITCHcase();
                            break;
                        }
                        break;
                    case 2:
                        system("cls");
                        centerPrint("===============Welcome to Admission Portal in High School(11th , 12th std)===============\n\n\n");
                        printf("\t\tHere Below ,some High Schools are mentioned where you can take admission in \n ");
                        printf("\t\tAll the Schools take admission in all of the courses including PCM , PCB , PCMB\n");
                        printf("\t\tPress any of the 5 options\n");
                        printf("\t\t1.Government Convent High School\n");
                        printf("\t\t2.Childrens Academy\n");
                        printf("\t\t3.St. Xavier's School\n");
                        printf("\t\t4.Mumbai University\n");
                        printf("\t\t5.Tata Institute of General Sciences\n");
                        scanf("%d", &inputSCIENCE);
                        switch (inputSCIENCE)
                        {
                        case 1:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Government Convent High School\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &GOVERNMENT);
                            switch (GOVERNMENT)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_sci_govt);
                                if (num_seats_sci_govt == 1)
                                {
                                    reserve_seats_sci_govt(num_seats_sci_govt);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_sci_govt == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_sci_govt(num_seats_sci_govt);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                GovernmentHighSchool();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 2:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Childrens Academy\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &CHILDRENs);
                            switch (CHILDRENs)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_sci_childrens);
                                if (num_seats_sci_childrens == 1)
                                {
                                    reserve_seats_sci_childrens(num_seats_sci_childrens);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_sci_childrens == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_sci_childrens(num_seats_sci_childrens);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                childrensACADEMY();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 3:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of St. Xavier's School\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &XAVIERs);
                            switch (XAVIERs)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_sci_xav);
                                if (num_seats_sci_xav == 1)
                                {
                                    reserve_seats_sci_xav(num_seats_sci_xav);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_sci_xav == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_sci_xav(num_seats_sci_xav);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                xaviers();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 4:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Mumbai University\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &MUMBAI);
                            switch (MUMBAI)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_sci_mum);
                                if (num_seats_sci_mum == 1)
                                {
                                    reserve_seats_sci_mum(num_seats_sci_mum);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_sci_mum == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_sci_mum(num_seats_sci_mum);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                mumbaiUNIVERSITY();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 5:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Tata Institute of General Sciences\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &TATA);
                            switch (TATA)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_sci_tata);
                                if (num_seats_sci_tata == 1)
                                {
                                    reserve_seats_sci_tata(num_seats_sci_tata);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_sci_tata == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_sci_tata(num_seats_sci_tata);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                TATAclg();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        default:
                            defaultSWITCHcase();
                            break;
                        }
                        break;
                    default:
                        defaultSWITCHcase();
                        break;
                    }
                    break;
                default:
                    defaultSWITCHcase();
                    break;
                case 2:
                    system("cls");
                    printf("\t\tPress 1 for Commerce with IT\n");
                    printf("\t\tPress 2 for Commerce with Maths\n");
                    scanf("%d", &comm);
                    switch (comm)
                    {
                    case 1:
                        system("cls");
                        printf("\t===============Welcome to Admission Portal in Commerce Stream with IT===============\n\n\n");
                        printf("\t\tHere Below ,some High Colleges are mentioned where you can take admission \n ");
                        printf("\t\tPress any of the 5 options\n");
                        printf("\t\t1.N M college\n");
                        printf("\t\t2.Mithibai College\n");
                        printf("\t\t3.N L college\n");
                        printf("\t\t4.M K Gandhi College\n");
                        printf("\t\t5.K E S college\n");
                        scanf("%d", &comm10);
                        switch (comm10)
                        {
                        case 1:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of N M college\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &NM);
                            switch (NM)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_comm_nm);
                                if (num_seats_comm_nm == 1)
                                {
                                    reserve_seats_comm_nm(num_seats_comm_nm);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_comm_nm == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_comm_nm(num_seats_comm_nm);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                NMCollege();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 2:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Mithibai college\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &Mithibai);
                            switch (Mithibai)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_comm_mithibai);
                                if (num_seats_comm_mithibai == 1)
                                {
                                    reserve_seats_comm_mithibai(num_seats_comm_mithibai);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_comm_mithibai == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_comm_mithibai(num_seats_comm_mithibai);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                MIthibaiCLG();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 3:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of N L college\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &N);
                            switch (N)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_comm_n);
                                if (num_seats_comm_n == 1)
                                {
                                    reserve_seats_comm_n(num_seats_comm_n);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_comm_n == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_comm_n(num_seats_comm_n);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                NL();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 4:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of MK Gandhi college\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &MK);
                            switch (MK)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_comm_mk);
                                if (num_seats_comm_mk == 1)
                                {
                                    reserve_seats_comm_mk(num_seats_comm_mk);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_comm_mk == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_comm_mk(num_seats_comm_mk);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                MKgandhi();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 5:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of KES college\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &KES);
                            switch (KES)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_comm_kes);
                                if (num_seats_comm_kes == 1)
                                {
                                    reserve_seats_comm_kes(num_seats_comm_kes);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_comm_kes == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_comm_kes(num_seats_comm_kes);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                KESCLG();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        default:
                            defaultSWITCHcase();
                            break;
                        }
                        break;
                    case 2:
                        system("cls");
                        printf("\t===============Welcome to Admission Portal in Commerce Stream with Maths===============\n\n\n");
                        printf("\t\tHere Below ,some High Colleges are mentioned where you can take admission \n ");
                        printf("\t\tPress any of the 5 options\n");
                        printf("\t\t1.N M college\n");
                        printf("\t\t2.Mithibai College\n");
                        printf("\t\t3.N L college\n");
                        printf("\t\t4.M K Gandhi College\n");
                        printf("\t\t5.K E S college\n");
                        scanf("%d", &comm20);
                        switch (comm20)
                        {
                        case 1:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of N M college\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &NM1);
                            switch (NM1)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_comm_nm1);
                                if (num_seats_comm_nm1 == 1)
                                {
                                    reserve_seats_comm_nm1(num_seats_comm_nm1);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_comm_nm1 == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_comm_nm1(num_seats_comm_nm1);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                NMCollege();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 2:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Mithibai college\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &Mithibai1);
                            switch (Mithibai1)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_comm_mithibai1);
                                if (num_seats_comm_mithibai1 == 1)
                                {
                                    reserve_seats_comm_mithibai1(num_seats_comm_mithibai1);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_comm_mithibai1 == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_comm_mithibai1(num_seats_comm_mithibai1);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                MIthibaiCLG();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 3:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of N L college\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &N1);
                            switch (N1)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_comm_n1);
                                if (num_seats_comm_n1 == 1)
                                {
                                    reserve_seats_comm_n1(num_seats_comm_n1);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_comm_n1 == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_comm_n1(num_seats_comm_n1);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                NL();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 4:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of MK Gandhi college\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &MK1);
                            switch (MK1)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_comm_mk1);
                                if (num_seats_comm_mk1 == 1)
                                {
                                    reserve_seats_comm_mk1(num_seats_comm_mk1);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_comm_mk1 == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_comm_mk1(num_seats_comm_mk1);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }

                                break;
                            case 2:
                                MKgandhi();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 5:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of KES college\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &KES1);
                            switch (KES1)
                            {
                            case 1:
                               printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_comm_kes1);
                                if (num_seats_comm_kes1 == 1)
                                {
                                    reserve_seats_comm_kes1(num_seats_comm_kes1);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_comm_kes1 == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_comm_kes1(num_seats_comm_kes1);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                KESCLG();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        default:
                            defaultSWITCHcase();
                            break;
                        }
                        break;
                    default:
                        defaultSWITCHcase();
                        break;
                    }
                    break;
                case 3:
                    system("cls");
                    printf("\t\tPress 1 for Arts with Humanities\n");
                    printf("\t\tPress 2 for Arts with Computer Science\n");
                    scanf("%d", &arts);
                    switch (arts)
                    {
                    case 1:
                        system("cls");
                        printf("\t===============Welcome to Admission Portal in Arts Stream with Humanities===============\n\n\n");
                        printf("\t\tHere Below ,some High Colleges are mentioned where you can take admission \n ");
                        printf("\t\tPress any of the 5 options\n");
                        printf("\t\t1.Artistic college\n");
                        printf("\t\t2.Mithibai College\n");
                        printf("\t\t3.Pioneer college of arts\n");
                        printf("\t\t4.B K Shroff College of arts\n");
                        printf("\t\t5.Fergusson college\n");
                        scanf("%d", &artsHUM);
                        switch (artsHUM)
                        {
                        case 1:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Artistic College\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &artistic);
                            switch (artistic)
                            {
                            case 1:
                              printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_arts_artistic);
                                if (num_seats_arts_artistic == 1)
                                {
                                    reserve_seats_arts_artistic(num_seats_arts_artistic);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_arts_artistic == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_arts_artistic(num_seats_arts_artistic);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                artisticCLG();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 2:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Mithibai College\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &mithibaiClg);
                            switch (mithibaiClg)
                            {
                            case 1:
                                 printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_arts_mithibaiClg);
                                if (num_seats_arts_mithibaiClg == 1)
                                {
                                    reserve_seats_arts_mithibaiClg(num_seats_arts_mithibaiClg);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_arts_mithibaiClg == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_arts_mithibaiClg(num_seats_arts_mithibaiClg);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                mithibaiARTS();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 3:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Pioneer college of Arts\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &pioneerCLG);
                            switch (pioneerCLG)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_arts_pioneerClg);
                                if (num_seats_arts_pioneerClg == 1)
                                {
                                    reserve_seats_arts_pioneerClg(num_seats_arts_pioneerClg);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_arts_pioneerClg == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_arts_pioneerClg(num_seats_arts_pioneerClg);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                PIONEERclg();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 4:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of B K Shroff College of Arts\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &BK);
                            switch (BK)
                            {
                            case 1:
                                 printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_arts_BK);
                                if (num_seats_arts_BK == 1)
                                {
                                    reserve_seats_arts_BK(num_seats_arts_BK);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");

                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_arts_BK == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_arts_BK(num_seats_arts_BK);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                BKshroff();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 5:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Fergusson College of Arts\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &fergusson);
                            switch (fergusson)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_arts_fergusson);
                                if (num_seats_arts_fergusson == 1)
                                {
                                    reserve_seats_arts_fergusson(num_seats_arts_fergusson);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_arts_fergusson == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_arts_fergusson(num_seats_arts_fergusson);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                fergussonCLG();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        }
                        break;
                    case 2:
                        system("cls");
                        printf("\t===============Welcome to Admission Portal in Arts Stream with Computer Science===============\n\n\n");
                        printf("\t\tHere Below ,some High Colleges are mentioned where you can take admission \n ");
                        printf("\t\tPress any of the 5 options\n");
                        printf("\t\t1.St.Johns college\n");
                        printf("\t\t2.Mithibai College\n");
                        printf("\t\t3.J K college \n");
                        printf("\t\t4.B K Shroff College of arts\n");
                        printf("\t\t5.Madinson college\n");
                        scanf("%d", &artsCOMP);
                        switch (artsCOMP)
                        {
                        case 1:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of ST.John's College of Arts\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &STJohns);
                            switch (STJohns)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_arts_stjohns);
                                if (num_seats_arts_stjohns == 1)
                                {
                                    reserve_seats_arts_stjohns(num_seats_arts_stjohns);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_arts_stjohns == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_arts_stjohns(num_seats_arts_stjohns);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                stjohns();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 2:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Mithibai College of Arts\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &MithiBAICOMP);
                            switch (MithiBAICOMP)
                            {
                            case 1:
                               printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_arts_mithibaicomp);
                                if (num_seats_arts_mithibaicomp == 1)
                                {
                                    reserve_seats_arts_mithibaicomp(num_seats_arts_mithibaicomp);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_arts_mithibaicomp == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_arts_mithibaicomp(num_seats_arts_mithibaicomp);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                mithibaiARTS();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 3:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of JK College of Arts\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &JK);
                            switch (JK)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_arts_jk);
                                if (num_seats_arts_jk == 1)
                                {
                                    reserve_seats_arts_jk(num_seats_arts_jk);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_arts_jk == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_arts_jk(num_seats_arts_jk);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                JKclg();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 4:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of B K Shroff College of Arts\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &BKclg);
                            switch (BKclg)
                            {
                            case 1:
                                  printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_arts_BKclg);
                                if (num_seats_arts_BKclg == 1)
                                {
                                    reserve_seats_arts_BKclg(num_seats_arts_BKclg);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_arts_BKclg == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_arts_BKclg(num_seats_arts_BKclg);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                BKshroff();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                            }
                            break;
                        case 5:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Madinson College of Arts\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &madinconINPUT);
                            switch (madinconINPUT)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_arts_madison);
                                if (num_seats_arts_madison == 1)
                                {
                                    reserve_seats_arts_madison(num_seats_arts_madison);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_arts_madison == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_arts_madison(num_seats_arts_madison);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                madinson();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        default:
                            defaultSWITCHcase();
                            break;
                        }
                        break;
                    default:
                        defaultSWITCHcase();
                        break;
                    }
                    break;
                case 4:
                    // diploma
                    system("cls");
                    printf("\t\tPress 1 for Diploma in Computer Engineering\n");
                    printf("\t\tPress 2 for Diploma in Information Technology\n");
                    printf("\t\tPress 3 for Diploma in Electrical Engineering\n");
                    printf("\t\tPress 4 for Diploma in Mechanical Engineering\n");
                    printf("\t\tPress 5 for Diploma in Chemical Engineering\n");
                    scanf("%d", &diplomaALL);
                    switch (diplomaALL)
                    {
                    case 1:
                        system("cls");
                        printf("\t===============Welcome to Admission Portal in Diploma (Polytechnic)===============\n\n\n");
                        printf("\t\tHere Below ,some Polytechnic Colleges are mentioned where you can take admission \n ");
                        printf("\t\tPress any of the 5 options\n");
                        printf("\t\t1.Shri Bhagubhai Mafatlal Polyechnic\n");
                        printf("\t\t2.Government Polytechnic\n");
                        printf("\t\t3.Thakur Polytechnic\n");
                        printf("\t\t4.Sardar Patel Institute of Technology\n");
                        printf("\t\t5.K J Somaiya College\n");
                        scanf("%d", &comp);
                        switch (comp)
                        {
                        case 1:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Shri Bhagubhai Mafatlal Polyechnic\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &bhagubhai);
                            switch (bhagubhai)
                            {
                            case 1:
                             printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_bhagubhai);
                                if (num_seats_dip_bhagubhai == 1)
                                {
                                    reserve_seats_dip_BC(num_seats_dip_bhagubhai);
                                    printf("\n\n");
                                    centerPrint("----Kindly fill the Admission Form---\n");
                                    collectUserDetails(&users1[numUsers]);
                                    displayForm(users1[numUsers]);
                                    printf("\nEnter 'y' to save this response to a file, or 'n' to continue: ");
                                    scanf(" %c", &choice);
                                    getchar(); // consume newline character from input buffer
                                    if (choice == 'y')
                                    {
                                        saveToFile(users1[numUsers]);
                                        printf("Thank you for taking admission in our college!\n");
                                        printf("We will inform you shortly about the further admission proccess :)\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                    }
                                    else
                                    {
                                        printf("Thank you for taking admission in our college\n");
                                        printf("We will inform you shortly about the further admission proccess\n");
                                        centerPrint("-----Thank you , Visit again:)------\n");
                                        exit(1);
                                    }
                                    numUsers++;
                                    if (numUsers == MAX_USERS)
                                    {
                                        printf("Maximum number of users reached.\n");
                                        break;
                                    }
                                }
                                else if (num_seats_dip_bhagubhai == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_BC(num_seats_dip_bhagubhai);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                bhagubhaiComp();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 2:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for all the details of Government Polytechnic\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &government);
                            switch (government)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_govt);
                                if (num_seats_dip_govt == 1)
                                {
                                    reserve_seats_dip_GC(num_seats_dip_govt);
                                }
                                else if (num_seats_dip_bhagubhai == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_GC(num_seats_dip_govt);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                govtComp();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 3:
                            system("cls");
                            printf("\t\t press 1 to take admission \n");
                            printf("\t\t press 2 for all the details of Thakur Polytechnic\n");
                            printf("\t\t press 3 to exit\n");
                            scanf("%d", &thakur);
                            switch (thakur)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_thakur);
                                if (num_seats_dip_thakur == 1)
                                {
                                    reserve_seats_dip_TC(num_seats_dip_thakur);
                                }
                                else if (num_seats_dip_thakur == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_TC(num_seats_dip_thakur);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                thakurComp();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 4:
                            system("cls");
                            printf("\t\t press 1 to take admission \n");
                            printf("\t\t press 2 for all the details of Sardar Patel Institute of Technology\n");
                            printf("\t\t press 3 to exit\n");
                            scanf("%d", &spit);
                            switch (spit)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_spit);
                                if (num_seats_dip_spit == 1)
                                {
                                    reserve_seats_dip_SC(num_seats_dip_spit);
                                }
                                else if (num_seats_dip_spit == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_SC(num_seats_dip_spit);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                spitComp();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 5:
                            system("cls");
                            printf("\t\t press 1 to take admission \n");
                            printf("\t\t press 2 for all the details of K J Somaiya College\n");
                            printf("\t\t press 3 to exit\n");
                            scanf("%d", &kj);
                            switch (kj)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_kj);
                                if (num_seats_dip_kj == 1)
                                {
                                    reserve_seats_dip_KC(num_seats_dip_kj);
                                }
                                else if (num_seats_dip_spit == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_KC(num_seats_dip_kj);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                kjComp();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        }
                        break;
                    case 2:
                        system("cls");
                        printf("\t===============Welcome to Admission Portal in Diploma (Polytechnic)===============\n\n\n");
                        printf("\t\tHere Below ,some Polytechnic Colleges are mentioned where you can take admission \n ");
                        printf("\t\tPress any of the 5 options\n");
                        printf("\t\t1.Shri Bhagubhai Mafatlal Polyechnic\n");
                        printf("\t\t2.Government Polytechnic\n");
                        printf("\t\t3.Thakur Polytechnic\n");
                        printf("\t\t4.Sardar Patel Institute of Technology\n");
                        printf("\t\t5.K J Somaiya College\n");
                        scanf("%d", &diploIT);
                        switch (diploIT)
                        {
                        case 1:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for more enquiries\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &bhagubhaiIT);
                            switch (bhagubhaiIT)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_bhagubhaiit);
                                if (num_seats_dip_bhagubhaiit == 1)
                                {
                                    reserve_seats_dip_BT(num_seats_dip_bhagubhaiit);
                                }
                                else if (num_seats_dip_bhagubhaiit == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_BT(num_seats_dip_bhagubhaiit);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                bhagubhaicollegeIT();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 2:
                            system("cls");
                            printf("\t\t press 1 to take admission \n");
                            printf("\t\t press 2 for more enquiries\n");
                            printf("\t\t press 3 to exit\n");
                            scanf("%d", &governmentIT);
                            switch (governmentIT)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_govtit);
                                if (num_seats_dip_spit == 1)
                                {
                                    reserve_seats_dip_GIT(num_seats_dip_govtit);
                                }
                                else if (num_seats_dip_spit == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_GIT(num_seats_dip_govtit);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                governcollegeIT();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 3:
                            system("cls");
                            printf("\t\t press 1 to take admission \n");
                            printf("\t\t press 2 for more enquiries\n");
                            printf("\t\t press 3 to exit\n");
                            scanf("%d", &ThakurIT);
                            switch (ThakurIT)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_thakurit);
                                if (num_seats_dip_thakurit == 1)
                                {
                                    reserve_seats_dip_TIT(num_seats_dip_thakurit);
                                }
                                else if (num_seats_dip_thakurit == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_TIT(num_seats_dip_thakurit);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                thakurcollegeIT();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 4:
                            system("cls");
                            printf("\t\t press 1 to take admission \n");
                            printf("\t\t press 2 for more enquiries\n");
                            printf("\t\t press 3 to exit\n");
                            scanf("%d", &spitIT);
                            switch (spitIT)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_spitit);
                                if (num_seats_dip_spitit == 1)
                                {
                                    reserve_seats_dip_SIT(num_seats_dip_spitit);
                                }
                                else if (num_seats_dip_spitit == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_SIT(num_seats_dip_spitit);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                spitcollegeIT();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 5:
                            system("cls");
                            printf("\t\t press 1 to take admission \n");
                            printf("\t\t press 2 for more enquiries\n");
                            printf("\t\t press 3 to exit\n");
                            scanf("%d", &kjIT);
                            switch (kjIT)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_kjit);
                                if (num_seats_dip_kjit == 1)
                                {
                                    reserve_seats_dip_KIT(num_seats_dip_kjit);
                                }
                                else if (num_seats_dip_kjit == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_KIT(num_seats_dip_kjit);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                kjcollegeIT();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        default:
                            defaultSWITCHcase();
                            break;
                        }
                        break;
                    case 3:
                        system("cls");
                        printf("\t===============Welcome to Admission Portal in Diploma (Polytechnic)===============\n\n\n");
                        printf("\t\tHere Below ,some Polytechnic Colleges are mentioned where you can take admission \n ");
                        printf("\t\tPress any of the 5 options\n");
                        printf("\t\t1.Shri Bhagubhai Mafatlal Polyechnic\n");
                        printf("\t\t2.Government Polytechnic\n");
                        printf("\t\t3.Thakur Polytechnic\n");
                        printf("\t\t4.Sardar Patel Institute of Technology\n");
                        printf("\t\t5.K J Somaiya College\n");
                        scanf("%d", &diploElect);
                        switch (diploElect)
                        {
                        case 1:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for more enquiries\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &bhagubhaielectric);
                            switch (bhagubhaielectric)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_bhagubhaielec);
                                if (num_seats_dip_bhagubhaielec == 1)
                                {
                                    reserve_seats_dip_Bhagubhai(num_seats_dip_bhagubhaielec);
                                }
                                else if (num_seats_dip_bhagubhaielec == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_Bhagubhai(num_seats_dip_bhagubhaielec);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                bhagubhaiELEC();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 2:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for more enquiries\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &governmentelectric);
                            switch (governmentelectric)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_govtelec);
                                if (strcmp(choice_seats, "yes\n") == 0)
                                {
                                    reserve_seats_dip_GE(num_seats_dip_govtelec);
                                }
                                else if (num_seats_dip_govtelec == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_GE(num_seats_dip_govtelec);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                govtELEC();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 3:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for more enquiries\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &Thakurelectric);
                            switch (Thakurelectric)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_thakurelec);
                                if (num_seats_dip_thakurelec == 1)
                                {
                                    reserve_seats_dip_TE(num_seats_dip_thakurelec);
                                }
                                else if (num_seats_dip_thakurelec == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_TE(num_seats_dip_thakurelec);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                thakurELEC();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 4:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for more enquiries\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &spitelectric);
                            switch (spitelectric)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_spitelec);
                                if (num_seats_dip_spitelec == 1)
                                {
                                    reserve_seats_dip_SE(num_seats_dip_spitelec);
                                }
                                else if (num_seats_dip_spitelec == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_SE(num_seats_dip_spitelec);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                spitELEC();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 5:
                            system("cls");
                            printf("\t\tpress 1 to take admission \n");
                            printf("\t\tpress 2 for more enquiries\n");
                            printf("\t\tpress 3 to exit\n");
                            scanf("%d", &kjelectric);
                            switch (kjelectric)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_kjelec);
                                if (num_seats_dip_kjelec == 1)
                                {
                                    reserve_seats_dip_KE(num_seats_dip_kjelec);
                                }
                                else if (num_seats_dip_kjelec == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_KE(num_seats_dip_kjelec);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                kjELEC();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        default:
                            defaultSWITCHcase();
                            break;
                        }
                        break;
                    case 4:
                        system("cls");
                        printf("\t===============Welcome to Admission Portal in Diploma (Polytechnic)===============\n\n\n");
                        printf("\t\tHere Below ,some Polytechnic Colleges are mentioned where you can take admission \n ");
                        printf("\t\tPress any of the 5 options\n");
                        printf("\t\t1.Shri Bhagubhai Mafatlal Polyechnic\n");
                        printf("\t\t2.Government Polytechnic\n");
                        printf("\t\t3.Thakur Polytechnic\n");
                        printf("\t\t4.Sardar Patel Institute of Technology\n");
                        printf("\t\t5.K J Somaiya College\n");
                        scanf("%d", &mech);
                        switch (mech)
                        {
                        case 1:
                            system("cls");
                            printf("press 1 to take admission \n");
                            printf("press 2 for more enquiries\n");
                            printf("press 3 to exit\n");
                            scanf("%d", &bhagubhaimech);
                            switch (bhagubhaimech)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_bhagubhaimech);
                                if (num_seats_dip_bhagubhaimech == 1)
                                {
                                    reserve_seats_dip_BM(num_seats_dip_bhagubhaimech);
                                }
                                else if (num_seats_dip_bhagubhaimech == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_BM(num_seats_dip_bhagubhaimech);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                bhagubhaiMECHANICAL();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 2:
                            system("cls");
                            printf("press 1 to take admission \n");
                            printf("press 2 for more enquiries\n");
                            printf("press 3 to exit\n");
                            scanf("%d", &governmentmech);
                            switch (governmentmech)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_governmentmech);
                                if (num_seats_dip_governmentmech == 1)
                                {
                                    reserve_seats_dip_GM(num_seats_dip_governmentmech);
                                }
                                else if (num_seats_dip_governmentmech == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_GE(num_seats_dip_governmentmech);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                governmentMECHANICAL();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 3:
                            system("cls");
                            printf("press 1 to take admission \n");
                            printf("press 2 for more enquiries\n");
                            printf("press 3 to exit\n");
                            scanf("%d", &Thakurmech);
                            switch (Thakurmech)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_thakurmech);
                                if (num_seats_dip_governmentmech == 1)
                                {
                                    reserve_seats_dip_TM(num_seats_dip_thakurmech);
                                }
                                else if (num_seats_dip_thakurmech == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_TM(num_seats_dip_thakurmech);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }

                                break;
                            case 2:
                                thakurMECHANICAL();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 4:
                            system("cls");
                            printf("press 1 to take admission \n");
                            printf("press 2 for more enquiries\n");
                            printf("press 3 to exit\n");
                            scanf("%d", &spitmech);
                            switch (spitmech)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_spitmech);
                                if (num_seats_dip_spitmech == 1)
                                {
                                    reserve_seats_dip_SM(num_seats_dip_spitmech);
                                }
                                else if (num_seats_dip_spitmech == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_SM(num_seats_dip_spitmech);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                spitMECHANICAL();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 5:
                            system("cls");
                            printf("press 1 to take admission \n");
                            printf("press 2 for more enquiries\n");
                            printf("press 3 to exit\n");
                            scanf("%d", &kjmech);
                            switch (kjmech)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_kjmech);
                                if (num_seats_dip_kjmech == 1)
                                {
                                    reserve_seats_dip_KM(num_seats_dip_kjmech);
                                }
                                else if (num_seats_dip_kjmech == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_KM(num_seats_dip_kjmech);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                kjMECHANICAL();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        default:
                            defaultSWITCHcase();
                            break;
                        }
                        break;
                    case 5:
                        printf("\t===============Welcome to Admission Portal in Diploma (Polytechnic)===============\n\n\n");
                        printf("\t\tHere Below ,some Polytechnic Colleges are mentioned where you can take admission \n ");
                        printf("\t\tPress any of the 5 options\n");
                        printf("\t\t1.Shri Bhagubhai Mafatlal Polyechnic\n");
                        printf("\t\t2.Government Polytechnic\n");
                        printf("\t\t3.Thakur Polytechnic\n");
                        printf("\t\t4.Sardar Patel Institute of Technology\n");
                        printf("\t\t5.K J Somaiya College\n");
                        switch (chem)
                        {
                        case 1:
                            system("cls");
                            printf("press 1 to take admission \n");
                            printf("press 2 for more enquiries\n");
                            printf("press 3 to exit\n");
                            scanf("%d", &bhagubhaichem);
                            switch (bhagubhaichem)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_bhagubhaichem);
                                if (num_seats_dip_bhagubhaichem == 1)
                                {
                                    reserve_seats_dip_CH(num_seats_dip_bhagubhaichem);
                                }
                                else if (num_seats_dip_bhagubhaichem == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_CH(num_seats_dip_bhagubhaichem);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                bhagubhaiCHEM();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 2:
                            system("cls");
                            printf("press 1 to take admission \n");
                            printf("press 2 for more enquiries\n");
                            printf("press 3 to exit\n");
                            scanf("%d", &governmentchem);
                            switch (governmentchem)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_govtchem);
                                if (num_seats_dip_govtchem == 1)
                                {
                                    reserve_seats_dip_GCH(num_seats_dip_govtchem);
                                }
                                else if (num_seats_dip_govtchem == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_GCH(num_seats_dip_govtchem);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                governCHEM();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 3:
                            system("cls");
                            printf("press 1 to take admission \n");
                            printf("press 2 for more enquiries\n");
                            printf("press 3 to exit\n");
                            scanf("%d", &Thakurchem);
                            switch (Thakurchem)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_thakurchem);
                                if (num_seats_dip_thakurchem == 1)
                                {
                                    reserve_seats_dip_TCH(num_seats_dip_thakurchem);
                                }
                                else if (num_seats_dip_thakurchem == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_TCH(num_seats_dip_thakurchem);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                thakurCHEM();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 4:
                            system("cls");
                            printf("press 1 to take admission \n");
                            printf("press 2 for more enquiries\n");
                            printf("press 3 to exit\n");
                            scanf("%d", &spitchem);
                            switch (spitchem)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_spitchem);
                                if (num_seats_dip_spitchem == 1)
                                {
                                    reserve_seats_dip_SCH(num_seats_dip_spitchem);
                                }
                                else if (num_seats_dip_spitchem == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_SCH(num_seats_dip_spitchem);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                spitCHEM();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        case 5:
                            system("cls");
                            printf("press 1 to take admission \n");
                            printf("press 2 for more enquiries\n");
                            printf("press 3 to exit\n");
                            scanf("%d", &kjchem);
                            switch (kjchem)
                            {
                            case 1:
                                printf("Enter the no.of seats(max seat=1 and min seat=0):");
                                scanf("%d", &num_seats_dip_kjchem);
                                if (num_seats_dip_kjchem == 1)
                                {
                                    reserve_seats_dip_KCH(num_seats_dip_kjchem);
                                }
                                else if (num_seats_dip_kjchem == 0)
                                {
                                    printf("You have not selected any seats\n");
                                    system("cls");
                                    printf("Do you really wish to exit from taking the admission(yes or no)?:");
                                    scanf("%s", choice_seats);
                                    if (strcmp(choice_seats, "yes\n") == 0)
                                    {
                                        reserve_seats_dip_KCH(num_seats_dip_kjchem);
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("Thank you for showing interest in us :) Visit Again !");
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("Error!Per person can reserve only 1 seat");
                                }
                                break;
                            case 2:
                                kjCHEM();
                                break;
                            case 3:
                                exitFROMCODE();
                                break;
                            default:
                                defaultSWITCHcase();
                                break;
                            }
                            break;
                        default:
                            defaultSWITCHcase();
                            break;
                        }
                        break;
                    default:
                        defaultSWITCHcase();
                        break;
                    }
                    break;
                case 5:
                    exitFROMCODE();
                    break;
                    // default:
                    //     defaultSWITCHcase();
                    //     break;
                }
                return 1;
            }
        }
        // break;
        printf("Error: incorrect username or password.\n");
        tries++;
    }
    if (tries == 3)
    {
        printf("You have reached your maximum limit of entering incorrect password\n");
        printf("Do you wish to reset your password?(1-yes 0-no):");
        scanf("%d", &choice);
        if (choice == 1)
        {
            reset_password();
        }
        else
        {
            printf("Sorry!Your account is locked");
        }
    }
    return 0;
}
int panel()
{

    int choice_home, choice_stu, admin_choice,choice_admin;
    char filename[100];
    FILE *fp;
    char buffer[100];
    int user_count = 1;
    char admin[200];
    char admin_pass[200];
home:
    system("cls");
    centerPrint("==============Welcome To Maharashtra's Admission Portal==============");
    centerPrint("-------You are at the HomeScreen-------\n");
    printf("Press 1 to open the Admin Panel\n");
    printf("Press 2 to open the Student Panel\n");
    printf("Press 3 to Exit\n");
    printf("Enter your choice :");
    scanf("%d", &choice_home);
    getchar(); // consume the leftover newline character from scanf()
    system("cls");
    switch (choice_home)
    {
    case 1:

    admin:
        centerPrint("------You have opened the Admin Panel-------\n");
        printf("Enter your Username: ");
        fgets(admin, sizeof(admin), stdin);
        printf("Enter your Password: ");
        fgets(admin_pass, sizeof(admin_pass), stdin);
        if (strcmp(admin, "admin\n") == 0 && strcmp(admin_pass, "admin123\n") == 0) // compares the string for logging
        {
            printf("\t\tSuccessfully Logged In\n");
            system("cls");
            printf("\t\tPress 1 to search responses by name\n");
            printf("\t\tPress 2 to go to homescreen\n");
            printf("\t\tPress 3 to exit\n");
            printf("\t\tEnter your choice :");
            scanf("%d", &admin_choice);
            switch (admin_choice)
            {
            case 1:
                system("cls");
            file:
                printf("\t\tEnter the filename: ");
                scanf("%s", filename);
                printf("===================================\n");
                printf("Information for %s:\n", filename);
                printf("===================================\n");
                printf("\n");

                fp = fopen(filename, "r");
                if (fp == NULL)
                {
                    printf("Error opening file.\n");
                    printf("Try again :( \n");
                    goto file;
                }
                printf("===================================\n");

                while (fgets(buffer, sizeof(buffer), fp))
                {
                    printf("%s", buffer);
                }
                printf("===================================\n");

                fclose(fp);
                printf("\nThank you :),Above is the user Information for the particular user!\n");
                printf("\nDo you wish to search for the user?(1 for yes or 0 for no):");
                scanf("%d", &choice_admin);
                if (choice_admin == 1)
                {
                    system("cls");
                    goto file;
                }
                else
                {
                    printf("Thank you:),Visit again!");
                    exit(1);
                }
                break;

            case 2:
                goto home;
                break;
            case 3:
                printf("\t\tGoodbye!\n");
                exit(1);
            default:
                printf("\t\tInvalid Choice!\n");
                goto admin;
                break;
            }
            break;
        }
        else
        {
            printf("Invalid Login! Check your username or password and try again\n");
            goto admin;
        }
        break;
    case 2:
        load_users();
        centerPrint("------You have opened the Student Panel-------\n");
        printf("Press 1 for Login\n");
        printf("Press 2 for Signup \n");
        printf("Press 3 for Reset Password \n");
        printf("Press 4 for HomePage \n");

        printf("Enter your choice:");
        scanf("%d", &choice_stu);
        getchar();
        system("cls");
        switch (choice_stu)
        {
        case 1:
        login:
            login();
            // if (login)
            break;
        case 2:
            signup();
            goto login;
            break;
        case 3:
            reset_password();
            // Sleep(5);
            // system("cls");
            goto login;
            break;
        case 4:
            centerPrint("------Exiting Student Panel-------\n");
            goto home;
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
        break;
    case 3:
        printf("Thank you for using the Admission Portal. Goodbye!\n");
        exit(0);
        break;
    }
}

void searchByName(struct UserInfo users[], int numUsers)
{
    char name[100];
    printf("Enter a name to search for: ");
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < numUsers; i++)
    {
        if (strcmp(users[i].name, name) == 0)
        {
            found = 1;
            printf("Matching response found for '%s':\n", name);
            displayForm(users[i]);
            printf("\n");
        }
    }

    if (!found)
    {
        printf("No matching response found for '%s'.\n", name);
    }
}
int main()
{
    system("color E1");
    panel();
    return 0;
}
