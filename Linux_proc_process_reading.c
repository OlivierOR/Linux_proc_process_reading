/*
 * This program displays the names of all files in the current directory.
 */

#include <dirent.h> 
#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 40
int main(void) {
  DIR *d;
  struct dirent *dir;
  d = opendir("/proc/");
 FILE * fp;
FILE * fp2;
FILE * fp3;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
  char * ptr;
 if (d) {
    while ((dir = readdir(d)) != NULL ) {
//    printf("%s\n", dir->d_name);
 if (isdigit(*dir->d_name)) {
// i++; printf("%d\n",i);
// dos=printf("%s\n", dir->d_name);
char buffer1[SIZE] = "/proc/";
char buffer2[SIZE] = "/proc/";
char buffer3[SIZE] = "/proc/";

 ptr=strcat(buffer1,dir->d_name);
 ptr=strcat(buffer2,dir->d_name);
 ptr=strcat(buffer3,dir->d_name);
 ptr=strcat(buffer1,"/stat");
 ptr=strcat(buffer2,"/status");
 ptr=strcat(buffer3,"/cmdline");
// printf("buffer1 = %s\n", buffer1 );
 fp = fopen(buffer1, "r");
 fp2 = fopen(buffer2, "r");
 fp3 = fopen(buffer3, "r");
//printf("lecture1");
if (fp == NULL) exit(EXIT_FAILURE);
if (fp2 == NULL) exit(EXIT_FAILURE);
if (fp3 == NULL) exit(EXIT_FAILURE);
char a;
char b;
char c;
    //while ((read = getline(&line, &len, fp)) != -1) {
      //  printf("Retrieved line of length %zu:\n", read);
        //printf("%s", line);
//printf("LEC1");
while((a = fgetc(fp)) != EOF){
	//{ if (c == ':'){ bool == 0;} else {bool == 1;}
          // if ( bool == 1 ) {
		if(a == ' ' || a == '\n' ){printf(";");} 
                else {printf("%c", a); }}
fclose(fp);
while((b = fgetc(fp3)) != EOF){
	//{ if (c == ':'){ bool == 0;} else {bool == 1;}
          // if ( bool == 1 ) {
		if(b == ' ' ){printf(";");} 
                else {printf("%c", b); }}
fclose(fp3);
printf(";");

while((c = fgetc(fp2)) != EOF){
	//{ if (c == ':'){ bool == 0;} else {bool == 1;}
          // if ( bool == 1 ) {
		if(c == '\n' ){printf(";");} 
                else {printf("%c", c); }}
printf ("\n");

fclose(fp2);


    //while ((read = getline(&line, &len, fp)) != -1) {
      //  printf("Retrieved line of length %zu:\n", read);
        //printf("%s", line);


}
}
// ptr=strcat(buffer1,dir->d_name);
// printf("buffer1 = %s\n", buffer1 );
    closedir(d);
  }
  return(0);
}
