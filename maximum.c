#include <stdio.h>

int main() {
int i,n,max,number;
		printf("Enter the number of terms:");
		scanf("%d",&n);
		printf("Enter the elements:");
		scanf("%d",&number);
		if (n>0){
			max=number;
			for(i=1;i<n;i++){
				scanf("%d",&number);
				if (number>max){
					max=number;
					
}
} 
		printf("The maximum number is %d ",max);
}
}
