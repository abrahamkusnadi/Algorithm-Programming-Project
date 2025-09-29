#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct house{
	char location[101];
	char city[101];
	int price;
	int rooms;
	int bathroom;
	int carPark;
	char type[101];
	char furnish[101];
}st[4001];

int totalRow = 0;
int num = 0;

void readData(){ //membaca data dari mulai index 1 sampai index 3940
	FILE *fp = fopen("file.csv", "r");
	
	fscanf(fp, "%*[^\n]\n");
	if(fp == NULL){
		perror("Error");
	}else{
		while(fscanf(fp, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%s\n", &st[totalRow].location, &st[totalRow].city, &st[totalRow].price, &st[totalRow].rooms, &st[totalRow].bathroom, &st[totalRow].carPark, 
		&st[totalRow].type, &st[totalRow].furnish) == 8){
			totalRow++;
		}
	}
	fclose(fp);
}

void displayData(int n){ //mencetak data yang sudah dibaca dari index 1 sampai index ke n yang diinput user
	if(totalRow == 0){
		printf("No data\n");
	}else{
		printf("\n");
		printf("%-30s %-18s %-15s %-15s %-15s %-15s %-15s %s\n", "Location", 
		"City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
		for(int i = 0 ; i < n ; i++){ 
			printf("%-30s %-18s %-15d %-15d %-15d %-15d %-15s %s\n", st[i].location, st[i].city, st[i].price, st[i].rooms, st[i].bathroom, st[i].carPark, 
			st[i].type, st[i].furnish);
		}
	}
	printf("Press Enter to Continue!");
}

void searchData(char column[]){//mencari data dari inputan user (column) dan mencari data yang sesuai dari inputan user dari kolom tersebut
	int flag = 0; // untuk mengetahui apakah inputan user yang dicari ada di file
	char search[50];
	int angka = 0;
	
	printf("What do you want to find? ");
	
	if(strcmpi(column, "Location") == 0){
		scanf("%s", search);
		getchar();	
		for(int i = 0 ; i < totalRow ; i++){
			if(strcmp(st[i].location, search) == 0){
				flag = 1;
				break;
			}		
		}
		if(flag == 1){
			printf("Data Found. Detail of data:\n");
			printf("%-30s %-18s %-15s %-15s %-15s %-15s %-15s %s\n", "Location", 
			"City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			for(int i = 0 ; i < totalRow ; i++){
				if(strcmp(st[i].location, search) == 0){
					printf("%-30s %-18s %-15d %-15d %-15d %-15d %-15s %s\n", st[i].location, st[i].city, st[i].price, st[i].rooms, st[i].bathroom, st[i].carPark, 
					st[i].type, st[i].furnish);
				}
			}
		}else{
			printf("Data not found!\n");
		}	
	}
	else if(strcmpi(column, "City") == 0){
		scanf("%s", search);
		getchar();
		for(int i = 0 ; i < totalRow ; i++){
			if(strcmp(st[i].city, search) == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			printf("Data Found. Detail of data:\n");
			printf("%-30s %-18s %-15s %-15s %-15s %-15s %-15s %s\n", "Location", 
			"City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			for(int i = 0 ; i < totalRow ; i++){
				if(strcmp(st[i].city, search) == 0){
					printf("%-30s %-18s %-15d %-15d %-15d %-15d %-15s %s\n", st[i].location, st[i].city, st[i].price, st[i].rooms, st[i].bathroom, st[i].carPark, 
					st[i].type, st[i].furnish);
				}
			}
		}else{
			printf("Data not found!\n");
		} 
	}
	else if(strcmpi(column, "Price") == 0){
		scanf("%d", &angka);
		getchar();
		for(int i = 0 ; i < totalRow ; i++){
			if(st[i].price == angka){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			printf("Data Found. Detail of data:\n");
			printf("%-30s %-18s %-15s %-15s %-15s %-15s %-15s %s\n", "Location", 
			"City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			for(int i = 0 ; i < totalRow ; i++){
				if(st[i].price == angka){
					printf("%-30s %-18s %-15d %-15d %-15d %-15d %-15s %s\n", st[i].location, st[i].city, st[i].price, st[i].rooms, st[i].bathroom, st[i].carPark, 
					st[i].type, st[i].furnish);
				}
			}
		}else{
			printf("Data not found!\n");
		} 
	}
	else if(strcmpi(column, "Rooms") == 0){
		scanf("%d", &angka);
		getchar();
		for(int i = 0 ; i < totalRow ; i++){
			if(st[i].rooms == angka){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			printf("Data Found. Detail of data:\n");
			printf("%-30s %-18s %-15s %-15s %-15s %-15s %-15s %s\n", "Location", 
			"City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			for(int i = 0 ; i < totalRow ; i++){
				if(st[i].rooms == angka){
					printf("%-30s %-18s %-15d %-15d %-15d %-15d %-15s %s\n", st[i].location, st[i].city, st[i].price, st[i].rooms, st[i].bathroom, st[i].carPark, 
					st[i].type, st[i].furnish);
				}
			}
		}else{
			printf("Data not found!\n");
		}
	}
	else if(strcmpi(column, "Bathroom") == 0){
		scanf("%d", &angka);
		getchar();
		for(int i = 0 ; i < totalRow ; i++){
			if(st[i].bathroom == angka){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			printf("Data Found. Detail of data:\n");
			printf("%-30s %-18s %-15s %-15s %-15s %-15s %-15s %s\n", "Location", 
			"City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			for(int i = 0 ; i < totalRow ; i++){
				if(st[i].bathroom == angka){
					printf("%-30s %-18s %-15d %-15d %-15d %-15d %-15s %s\n", st[i].location, st[i].city, st[i].price, st[i].rooms, st[i].bathroom, st[i].carPark, 
					st[i].type, st[i].furnish);
				}
			}
		}else{
			printf("Data not found!\n");		
		}
	}
	else if(strcmpi(column, "Carpark") == 0){
		scanf("%d", &angka);
		getchar();
		for(int i = 0 ; i < totalRow ; i++){
			if(st[i].carPark == angka){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			printf("Data Found. Detail of data:\n");
			printf("%-30s %-18s %-15s %-15s %-15s %-15s %-15s %s\n", "Location", 
			"City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			for(int i = 0 ; i < totalRow ; i++){
				if(st[i].carPark == angka){
					printf("%-30s %-18s %-15d %-15d %-15d %-15d %-15s %s\n", st[i].location, st[i].city, st[i].price, st[i].rooms, st[i].bathroom, st[i].carPark, 
					st[i].type, st[i].furnish);
				}
			}
		}else{
			printf("Data not found!\n");	
		}
	}
	else if(strcmpi(column, "Type") == 0){
		printf("What do you want to find: ");
		scanf("%s", search);
		getchar();
		for(int i = 0 ; i < totalRow ; i++){
			if(strcmpi(st[i].type, search) == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			printf("Data Found. Detail of data:\n");
			printf("%-30s %-18s %-15s %-15s %-15s %-15s %-15s %s\n", "Location", 
			"City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			for(int i = 0 ; i < totalRow ; i++){
				if(strcmpi(st[i].type, search) == 0){
					printf("%-30s %-18s %-15d %-15d %-15d %-15d %-15s %s\n", st[i].location, st[i].city, st[i].price, st[i].rooms, st[i].bathroom, st[i].carPark, 
					st[i].type, st[i].furnish);
				}
			}
		}else{
			printf("Data not found!\n");			
		}
	}
	else if(strcmpi(column, "Furnish") == 0){
		scanf("%s", search);
		getchar();
		for(int i = 0 ; i < totalRow ; i++){
			if(strcmpi(st[i].furnish, search) == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			printf("Data Found. Detail of data:\n");
			printf("%-30s %-18s %-15s %-15s %-15s %-15s %-15s %s\n", "Location", 
			"City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			for(int i = 0 ; i < totalRow ; i++){
				if(strcmpi(st[i].furnish, search) == 0){
					printf("%-30s %-18s %-15d %-15d %-15d %-15d %-15s %s\n", st[i].location, st[i].city, st[i].price, st[i].rooms, st[i].bathroom, st[i].carPark, 
					st[i].type, st[i].furnish);
				}
			}
		}else{
			printf("Data not found!\n");
			getchar();	
		}
	}
	printf("Press Enter to Continue!");

}

void sortBy(char column[], int idx){//Mengurutkan suatu kolom dan ada pilihan ascending atau descending sesuai keinginan user
	char urut[10];
	int flag; // untuk validasi input pilihan asc atau desc
	
	if(strcmpi(column, "Location") == 0){
			do{
				flag = 0;
				printf("Sort ascending or descdending? ");
				scanf("%s", urut);
				getchar();
				if(strcmpi(urut, "asc") == 0){
					flag = 1;
					for(int i = 0 ; i < idx - 1 ; i++){
						for(int j = 0 ; j < idx - 1  - i ; j++){
							if(strcmp(st[j].location, st[j+1].location) > 0){
								struct house tempLocation = st[j];
								st[j] = st[j+1];
								st[j+1] = tempLocation;
							}
						}
					}
				}else if(strcmpi(urut, "desc") == 0){
					flag = 1;
					for(int i = 0 ; i < idx - 1 ; i++){
						for(int j = 0 ; j < idx - 1  - i ; j++){
							if(strcmp(st[j].location, st[j+1].location) < 0){
								struct house tempLocation = st[j];
								st[j] = st[j+1];
								st[j+1] = tempLocation;
							}
						}
					}		
				}else{
					printf("Input Invalid ('asc' or 'desc')\n");
				}
			}while(flag == 0);
	
	}else if(strcmpi(column, "City") == 0){
		do{
			flag = 0;
			printf("Sort ascending or descending? ");
			scanf("%s", urut);
			getchar();
			if(strcmpi(urut, "asc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(strcmp(st[j].city, st[j+1].city) > 0){
							struct house tempCity = st[j];
							st[j] = st[j+1];
							st[j+1] = tempCity;
						}
					}
				}
			}else if(strcmpi(urut, "desc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(strcmp(st[j].city, st[j+1].city) < 0){
							struct house tempCity = st[j];
							st[j] = st[j+1];
							st[j+1] = tempCity;
						}
					}
				}		
			}else{
				printf("Input Invalid ('asc' or 'desc')\n");
			}
			
		}while(flag == 0);

	}else if(strcmpi(column, "Price") == 0){
		do{
			flag = 0;
			printf("Sort ascending or descending? ");
			scanf("%s", urut);
			getchar();
			if(strcmpi(urut, "asc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(st[j].price > st[j+1].price){
							struct house tempPrice = st[j];
							st[j] = st[j+1];
							st[j+1] = tempPrice;
						}
					}
				}
			}else if(strcmpi(urut, "desc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(st[j].price < st[j+1].price){
							struct house tempPrice = st[j];
							st[j] = st[j+1];
							st[j+1] = tempPrice;
						}
					}
				}	
			}else{
				printf("Input Invalid ('asc' or 'desc')\n");
			}
		}while(flag == 0);

	}else if(strcmpi(column, "Rooms") == 0){
		do{
			flag = 0;
			printf("Sort ascending or descending? ");
			scanf("%s", urut);
			getchar();
			if(strcmpi(urut, "asc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(st[j].rooms > st[j+1].rooms){
							struct house tempRooms = st[j];
							st[j] = st[j+1];
							st[j+1] = tempRooms;
						}
					}
				}
			}else if(strcmpi(urut, "desc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(st[j].rooms < st[j+1].rooms){
							struct house tempRooms = st[j];
							st[j] = st[j+1];
							st[j+1] = tempRooms;
						}
					}
				}	
			}else{
				printf("Input Invalid ('asc' or 'desc')\n");
			}
	
		}while(flag == 0);

	}else if(strcmpi(column, "Bathroom") == 0){
		do{
			flag = 0;
			printf("Sort ascending or descending? ");
			scanf("%s", urut);
			getchar();
			if(strcmpi(urut, "asc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(st[j].bathroom > st[j+1].bathroom){
							struct house tempBath = st[j];
							st[j] = st[j+1];
							st[j+1] = tempBath;
						}
					}
				}
			}else if(strcmpi(urut, "desc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(st[j].bathroom < st[j+1].bathroom){
							struct house tempBath = st[j];
							st[j] = st[j+1];
							st[j+1] = tempBath;
						}
					}
				}	
			}else{
				printf("Input Invalid ('asc' or 'desc')\n");
			}
			
		}while(flag == 0);

	}else if(strcmpi(column, "Carpark") == 0){
		do{
			flag = 0;
			printf("Sort ascending or descending? ");
			scanf("%s", urut);
			getchar();
			if(strcmpi(urut, "asc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(st[j].carPark > st[j+1].carPark){
							struct house tempCar = st[j];
							st[j] = st[j+1];
							st[j+1] = tempCar;
						}
					}
				}
			}else if(strcmpi(urut, "desc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(st[j].carPark < st[j+1].carPark){
							struct house tempCar = st[j];
							st[j] = st[j+1];
							st[j+1] = tempCar;
						}
					}
				}	
			}
			else{
				printf("Input Invalid ('asc' or 'desc')\n");
			}
		}while(flag == 0);

	}else if(strcmpi(column, "Type") == 0){
		do{
			flag = 0;
			printf("Sort ascending or descending? ");
			scanf("%s", urut);
			getchar();
			if(strcmpi(urut, "asc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(strcmp(st[j].type, st[j+1].type) > 0){
							struct house tempType = st[j];
							st[j] = st[j+1];
							st[j+1] = tempType;
						}
					}
				}
			}else if(strcmpi(urut, "desc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(strcmp(st[j].type, st[j+1].type) < 0){
							struct house tempType = st[j];
							st[j] = st[j+1];
							st[j+1] = tempType;
						}
					}
				}		
			}
			else{
				printf("Input Invalid ('asc' or 'desc')\n");
			}	
		}while(flag == 0);
	}else if(strcmpi(column, "Furnish") == 0){
		do{
			flag = 0 ;
			printf("Sort ascending or descending? ");
			scanf("%s", urut);
			getchar();
			if(strcmpi(urut, "asc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(strcmp(st[j].furnish, st[j+1].furnish) > 0){
							struct house tempFurnish = st[j];
							st[j] = st[j+1];
							st[j+1] = tempFurnish;
						}
					}
				}
			}else if(strcmpi(urut, "desc") == 0){
				flag = 1;
				for(int i = 0 ; i < idx - 1 ; i++){
					for(int j = 0 ; j < idx - 1  - i ; j++){
						if(strcmp(st[j].furnish, st[j+1].furnish) < 0){
							struct house tempFurnish = st[j];
							st[j] = st[j+1];
							st[j+1] = tempFurnish;
						}
					}
				}		
			}else{
				printf("Input Invalid ('asc' or 'desc')\n");
			}
		}while(flag  == 0);
	
	}
	
	printf("Data Found. Detail of data\n");
	printf("%-30s %-18s %-15s %-15s %-15s %-15s %-15s %s\n", "Location", 
	"City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
	for(int i = 0 ; i < 10 ; i++){
		printf("%-30s %-18s %-15d %-15d %-15d %-15d %-15s %s\n", st[i].location, st[i].city, st[i].price, st[i].rooms, st[i].bathroom, st[i].carPark, 
		st[i].type, st[i].furnish);
		
	}
	printf("Press Enter to Continue!");
}

void exportData(){//mengekspor data kedalam file.csv dengan nama file dari inputan user
	char fileName[100];
	
	printf("File name: ");
	scanf("%[^\n]", fileName);
	getchar();
	
	
	strcat(fileName, ".csv");
	
	FILE *fp2 = fopen(fileName, "w");
	
	fprintf(fp2, "Location 1,Location 2,Price,Rooms,Bathroom,Carpark,Type,Furnish\n");
	for(int i = 0 ; i < totalRow ; i++){
		fprintf(fp2, "%s,%s,%d,%d,%d,%d,%s,%s\n", st[i].location, st[i].city, st[i].price, st[i].rooms, st[i].bathroom, st[i].carPark, 
			st[i].type, st[i].furnish);
	}
	printf("Data successfully written to file %s!\n", fileName);
	
		
	fclose(fp2);
}

int main(){
	readData();
	
	int row;
	int choice;
	char column[20];
	char place[100];
	char fileName;
	int valid2;
	int valid3;
	
	do{
		system("cls");
		printf("What do you want to do?\n");
		printf("1. Display Data\n");
		printf("2. Search Data\n");
		printf("3. Sort Data\n");
		printf("4. Export Data\n");
		printf("5. Exit\n");
		
		do{
			printf("Your choice: ");
			scanf("%d", &choice);
			getchar();
		}while(choice < 1  || choice > 5);
		
		switch(choice){
			case 1 : 
				do{
					printf("Number of rows: ");
					scanf("%d", &row);
					getchar();
					if(row > totalRow){
						row = totalRow;
					}else if(row <= 0){
						printf("Invalid Input( Must be greater than 0)\n");
					}
				}while(row <= 0);
				displayData(row);
				break;
			case 2 :
				do{
					valid2 = 0;
					printf("Choose column: ");
					scanf("%s", column);
					getchar();
						if(strcmpi(column, "Location") == 0 || strcmpi(column, "City") == 0 || strcmpi(column, "Price") == 0 || strcmpi(column, "Rooms") == 0 || strcmpi(column, "Bathroom") == 0 || strcmpi(column, "Carpark") == 0 || strcmpi(column, "Type") == 0 || strcmpi(column, "Furnish") == 0){
							valid2 = 1;
						}
						else{
							printf("Input Invalid!\n");
						}
				}while(valid2 == 0);
				searchData(column);
				break;
			case 3 :
				do{	
					valid3 = 0;
					printf("Choose column: ");
					scanf("%s", column);
					getchar();
					if(strcmpi(column, "Location") == 0 || strcmpi(column, "City") == 0 || strcmpi(column, "Price") == 0 || strcmpi(column, "Rooms") == 0 || strcmpi(column, "Bathroom") == 0 ||
						strcmpi(column, "Carpark") == 0 || strcmpi(column, "Type") == 0 || strcmpi(column, "Furnish") == 0){
						valid3 = 1;
					}
					else{
						printf("Input Invalid!\n");
					}
				}while(valid3 == 0);
				sortBy(column, totalRow);
				break;
				
			case 4 : 
				exportData();
				break;
			case 5 : 
				printf("Press Enter to Exit!");
		}
		getchar();
	}while(choice != 5);
}
