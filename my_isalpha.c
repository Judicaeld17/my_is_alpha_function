int my_isalpha(char letter){
    if((letter >= 'a' && letter <= 'z') || (letter>='A' && letter<='Z')){
        return 1;
    }
    return 0;
}
