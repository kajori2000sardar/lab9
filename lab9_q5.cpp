char s[10] = "abcde";
char* cptr;

// WRITE YOUR CODE HERE

//ANS:
cptr = s + strlen(s);
cptr--;
while(cptr>=s)
{
	cout<<*cptr--;
}

