#include <stdio.h>
#include <ctype.h>

int size = 26;
int array[26];
char c;
char d;
char filename[] = "file.txt";
unsigned int offset = 12;

int takeArray(const int *array, int size);

int calculateHistogram(char *filename, int *array);

int largest(int *array, int size);

//void encipher(const char *p, char *c, const unsigned offset);

int main () {
	/* FILE *fp;
	fp = fopen("file.txt","r+");
	
	c = fgetc()fp;
	
	while
	if(isalpha(p) == 2){
		  c = toupper(c);
	  }
	
    */
	//encipher(p, d, offset)
	
	calculateHistogram(filename, array);
	
	takeArray(array, size);
	
	largest(array,size);
   
   return(0);
}

int calculateHistogram(char *filename, int *array){
		char z;
		
		FILE *fp;
  
   fp = fopen("file.txt","r+");
   if(fp == NULL) {
      fprintf(stdout, "Error in opening file");
      return(-1);
   } 
   
   do {
      c = fgetc(fp);
      if( c == EOF){
         break ;
      }
	  
	  if(isalpha(c) == 2){
		  c = toupper(c);
		//printf("%c", toupper(c));
	  }else{
		//printf("%c", c);
	  }
	  
	  z = (int) c;
	  
	  z = z - 65;
	  
	  array[z]++;
	  
      //printf("%c", c);
   } while(1);
   
   fclose(fp);
   
   return(0);
}

int takeArray(const int *array, int size){
	
	int i = 0;
	
	for( i ; i < size; i++){
		
		printf("%d\n", array[i]);
		
	}
	
	return(0);
	
}

int largest(int *array, int size){
	
	int z,r,k;
	float temp = 0;
	float numast = 0;
	float num = 0;
	float n = 100;
	
	
	for(z = 0;z<size;z++){
		
		if(temp < array[z]){
			  temp=array[z];	
		}
	}
	
	
	for(k = 0; k < size;k++){
		
		num = temp/array[k];
		numast = n/num;
		
		//printf("Debug : largest numast = %d", numast);
		
		for(r = 0; r<numast; r++){
			printf("*");
		}
		
		printf("\n");
	}
}

/* void encipher(const char *p, char *c, const unsigned offset){
	printf("%s\n", p);
	
	int j = 0;
	int z = 0;
	
	while (1){
		if (p[j] != '\'){
			z = (int) p[j];
			for(j;j<offset;j++){
					
				if(z>=90){
					z = 65;
				}else{
					z++;
				}
					
			c[j] = (char) z;
			}
			
			j++;
			
		}else{
			break;
		}
		
	}
} */

/* void decipher(const char *c, char *p, const unsigned int offset){
	
} */
