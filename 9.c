#include<stdio.h>

int main(){
	
	
	int a;
	for(a=1; a<=1000; a++){
		int b;
		for(b=1; b<=1000; b++){
			int c;
			for(c=1; c<=1000; c++){
				if((a+b+c) == 1000){
					if(a<b && a<c && b<c){
						if((a*a)+(b*b) == (c*c)){
							printf("%d\n", a*b*c);
						}
					}
				}
			}
		}
	}
	return 0;
}
