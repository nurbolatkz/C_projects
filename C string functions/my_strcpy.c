char* my_strcpy(char* param_1, char* param_2){   
    
    int len2 = strlen(param_2);
    for(int i = 0; i < len2; i++){
        
        *(param_1+i) = *(param_2 +i);
        if (i==len2){
            *(param_1+1) = '\0';    
        }
    }
    return param_1;
}
