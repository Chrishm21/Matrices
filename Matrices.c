#include<stdio.h>

void multiplicacion();
void suma();
void resta();
void leer();
void menu();
void opcion();
void resul();
void salto();

int mat1[3][3];
int mat2[3][3];	
int res[3][3];
int i,j,cont=0;

int main()
{
	menu();
	opcion();
}

void menu()
{
	printf("===========================Menu===========================\n");
	printf("<<		1) Suma de Matrices 3x3			>>\n");
	printf("<<		2) Resta de Matrices 3x3		>>\n");
	printf("<<		3) Multiplicacion de Matrices 3x3	>>\n");
	printf("<<		4) Salir				>>\n");
	printf("==========================================================\n");
	printf("\n");
	printf("\n");
}

void opcion()
{
	int opcion=0;
	printf("Elige una opcion del menu: ");
	scanf("%d",& opcion);
	
	switch(opcion)
	{
		case 1: opcion==1;
		suma();
		break;
				
		case 2: opcion==2;
		resta();
		break;
				
	    case 3: opcion==3;
		multiplicacion();
		break;
			    
	    case 4: opcion==4;
		break;	
	}	
}

void multiplicacion()
{
	leer();
	resul();
	res[0][0]=(mat1[0][0]*mat2[0][0])+(mat1[0][1]*mat2[1][0])+(mat1[0][2]*mat2[2][0]);
	res[0][1]=(mat1[0][0]*mat2[0][1])+(mat1[0][1]*mat2[1][1])+(mat1[0][2]*mat2[2][1]);
	res[0][2]=(mat1[0][0]*mat2[0][2])+(mat1[0][1]*mat2[1][2])+(mat1[0][2]*mat2[2][2]);
	printf("	 %d   %d  %d", res[0][0],res[0][1],res[0][2]);
	printf("\n");
	res[1][0]=(mat1[1][0]*mat2[0][0])+(mat1[1][1]*mat2[1][0])+(mat1[1][2]*mat2[2][0]);
	res[1][1]=(mat1[1][0]*mat2[0][1])+(mat1[1][1]*mat2[1][1])+(mat1[1][2]*mat2[2][1]);
	res[1][2]=(mat1[1][0]*mat2[0][2])+(mat1[1][1]*mat2[1][2])+(mat1[1][2]*mat2[2][2]);
	printf("\n");
	printf("	 %d   %d  %d", res[1][0],res[1][1],res[1][2]);
	printf("\n");
	res[2][0]=(mat1[2][0]*mat2[0][0])+(mat1[2][1]*mat2[1][0])+(mat1[2][2]*mat2[2][0]);
	res[2][1]=(mat1[2][0]*mat2[0][1])+(mat1[2][1]*mat2[1][1])+(mat1[2][2]*mat2[2][1]);
	res[2][2]=(mat1[2][0]*mat2[0][2])+(mat1[2][1]*mat2[1][2])+(mat1[2][2]*mat2[2][2]);
	printf("\n");
	printf("	 %d   %d  %d", res[2][0],res[2][1],res[2][2]);
}

void suma()
{
    leer();
    resul();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		salto();
		res[i][j]=(mat1[i][j]+mat2[i][j]);
		printf(" 	%d " , res[i][j]);
		cont++;
	    }
	}
	
}

void resta()
{
    leer();
	resul();    
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		salto();
		res[i][j]=(mat1[i][j]-mat2[i][j]);
		printf("	 %d " , res[i][j]);
		cont++;
	    }
	}
}
void leer()
{
	printf("			Matriz 1		");
	printf("\n \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Introduzca valor en forma en la posicion [%d,%d]: ",i,j);
		scanf("%d", &mat1[i][j]);	
		printf("\n");
	    }
	}
		
	printf("---------------------------------------------------------");
	printf("\n \n");
	printf("			Matriz 2		");
	printf("\n \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Introduzca valor en forma en la posicion [%d,%d]: ",i,j);
		scanf("%d", &mat2[i][j]);	
		printf("\n");
	    }
	}
}
void resul()
{	
	printf("\n");
    printf("-------Matriz resultante-------- ");
    printf("\n");
    printf("\n");
}
void salto()
{
	if(cont==3||cont==6)
		{
		printf("	 \n");
		printf("	 \n");
	    }
}
