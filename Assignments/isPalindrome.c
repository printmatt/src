// Check for palindrome. Return 0 if true
int isPalindrome(int x){
    // Create a copy of the number for comparison later
    int copy = x;
    int temp =0;

    // These math operations make the last digit of our number become
    // the first digit of our temp.
    while(x>0){
        temp = temp*10 + x%10;
        x = x/10;
    }

    // If our updated temp is equal to the copy of our number,
    // it means that the reverse of x = x -> palindrome
    if(temp ==  copy){
        return 0;
    }
    else
    {
        return 1;
    }    

}