#include <stdio.h>
#include <stdlib.h>

int num;

typedef struct member{
	int number;
	char name[9];
	char phone[13];
	char address[50];
	int *head;
}member;

void regist();

int main(void){
	FILE *fp;
	fp = fopen("phonebook.txt", "r");
	fscanf(fp, "total: %d", &num);
	regist();
	return 0;
}

void regist(){
	member *part;
	int i;
	part = (member *)malloc(sizeof(member)*num);
	
	for(i = 0; i < num; i++){
		part[i].number = i;
		printf("name: ");
		scanf("%s", part[i].name);
		printf("%s recorded.\n", part[i].name);
		
		}
}

