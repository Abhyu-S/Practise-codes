    int n,ctr=0;
    scanf("%d",&n);
    int copy16=n;
    int copy8=n;
    while(n){
        n/=10;
        ctr++;
    }
    int rem8[ctr], rem16[ctr];
    
    int i=0;
    while(copy8){
        int rem = copy8 % 8;
        copy8/=8;
        rem8[i]=rem;
        i++;
    }    
    int j=0;
    while(copy16){
        int rem = copy16 % 16;
        copy16/=16;
        rem16[j]=rem;
        j++;
    }
    printf("Hexadecimal: 0x");
    for(int i=0; i<ctr; i++){
        if((rem16[ctr-1-i]>9)&&(rem16[ctr-1-i]<16)){
            char ch = 87+rem16[ctr-1-i]; 
            printf("%c", ch);
        }
        else if((rem16[ctr-1-i]>0)&&(rem16[ctr-1-i]<10)){
            char ch = 48+rem16[ctr-1-i];
            printf("%c", ch);
        }
    }
    printf("\nOctal: 0o");
    for (int i = 0; i < ctr; i++)
    {
        printf("%d", rem8[ctr-1-i]);
    }
    
}