void swap_int_value(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int sum_int_value(int a, int b)
{
    int result = a + b;
    return result;
}

/**
  * Translate Character for linux system character
  * @author tshyeon
  * @description translate special letters for linux system
  * @param {char*} str string
  * @return buf tranlated string
  * @example hello "my" (seowon) -> hello\ \"my\"\ \(seowon\)
*/
char *strTranslate(char* str)
{
    static char buf[1024];
    int index = 0;
    int bufindex = 0;

    if (str == NULL) {
        printf("strTranslate error\n");
        printf("File : %s, Function : %s, Line : %d\n", __FILE__, __FUNCTION__, __LINE__);
        return NULL;
    }

    (char *)memset(buf, 0, sizeof(buf));

    while(str[index] != '\0') { // Check End of String
		if ( str[index] == ' ' || str[index] == '\"' || str[index] == '(' || str[index] == ')'\
	 		|| str[index] == '!' || str[index] == '[' || str[index] == ']' || str[index] == '{' || str[index] == '}') {
			buf[bufindex] = '\\';
			buf[bufindex+1] = str[index];
			bufindex++;
		}
		else {
			buf[bufindex] = str[index];
		}

        index++;
        bufindex++;
    }

    return buf;
}
