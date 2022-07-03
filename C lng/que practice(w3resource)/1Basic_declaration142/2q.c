
// get the C version using........
int main(int argc, char** argv[])
{
    if(__STDC_VERSION__ >= 201710L){
        printf("we are using C18!\n");
    }
    else if ( __STDC_VERSION__ >=202112L)
    {
        printf("we are using C11!\n");
        
    }
    else if ( __STDC_VERSION__ >=199901L)
    {
        printf("we are using C99!\n");
    }
    else
    printf("WE are using C89/C90!\n");
    
    return 0;
}
