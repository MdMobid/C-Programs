#!/bin/bash

# 1. Create a temporary menu file to display your text
CATALOGUE=".lab_list.txt"
cat << EOF > $CATALOGUE
================ LAB ASSIGNMENTS INDEX ================

3. LAB3 (11-12-25)
   301. LA301.c -> addition of two integers
   302. LA302.c -> centigrade to fahrenheit
   303. LA303.c -> area of a circle
   304. LA304.c -> area of a triangle
   305. LA305.c -> swapping of two integers using third variable

4. LAB4 (15-12-25)
   401. LA401.c -> seconds into hour, minute and second
   402. LA402.c -> distance into kilometer and meter
   403. LA403.c -> sum of first and last of a 6 digit number
   404. LA404.c -> sum of all digits of a three-digit number
   405. LA405.c -> find profit & loss

5. LAB5 & LAB6 (18-12-25 & 05-01-26)
   501. LA501.c -> largest between two numbers
   502. LA502.c -> lowercase to uppercase
   503. LA503.c -> vowel or consonant
   504. LA504.c -> leap year check
   505. LA505.c -> roots of quadratic (if-else)
   506. LA506.c -> KIIT grading system
   507. LA507.c -> menu calculator
   508. LA508.c -> weekday name (switch)
   509. LA509.c -> KIIT grading (if-else)
   510. LA510.c -> roots of quadratic (switch)

7. LAB7 (08-01-26)
   701. LA701.c -> even series within 50
   702. LA702.c -> natural numbers 1 to n
   703. LA703.c -> natural numbers n to 1
   704. LA704.c -> sum and average of 10 numbers
   705. LA705.c -> sum of digits
   706. LA706.c -> reverse of a number

8. LAB8 (12-01-26)
   801. LA801.c -> fibonacci series
   802. LA802.c -> perfect number
   803. LA803.c -> prime number
   804. LA804.c -> lucas sequence
   805. LA805.c -> gcd and lcm
   806. LA806.c -> factorial
   807. LA807.c -> strong number
   808. LA808.c -> display series (0 1 1 2 4 7 13 24 44)

9. LAB9 & LAB10 (15-01-26 & 19-01-26)
   901. LA901.c -> sum of series [ 1+2^2+...+n^n ]
   902. LA902.c -> sum of series [ 1 + √2 + √3 + ... + √n ]
   903. LA903.c -> pattern 1
   904. LA904.c -> pattern 2
   905. LA905.c -> pattern 3
   906. LA906.c -> pattern 4
   907. LA907.c -> pattern 5

11. LAB11 (22-01-26)
   1101. LA1101.c -> create an array and display elements
   1102. LA1102.c -> sum of numbers stored in an array
   1103. LA1103.c -> average of numbers stored in an array
   1104. LA1104.c -> largest element stored in an array
   1105. LA1105.c -> insert an element in an 1-D array

12. LAB12 (29-01-26)
   1201. LA1201.c -> display array elements in ascending order
   1202. LA1202.c -> print all unique elements of an array
   1203. LA1203.c -> print all even even and odd of an array
   1204. LA1204.c -> reverse the array elements
   1205. LA1205.c -> find a subarray that adds to given sum

13. LAB13 & LAB14 (02-02-26 & 12-02-26)
   1301. LA1301.c -> store city, day and temp in a 2D array
   1302. LA1302.c -> sum of 2 matrices (2x2)
   1303. LA1303.c -> multiply 2 matrices and display
   1304. LA1304.c -> sum of elements of matrix in its upper triangle
   1305. LA1305.c -> check 2 matrices are equal or not

15. LAB15 (16-02-26)
   1501. LA1501.c -> addition of two integers using functions
   1502. LA1502.c -> find factorial of a number using functions
   1503. LA1503.c -> value of nth term of fibonacci series using functions
   1504. LA1504.c -> check prime or not using function
   1505. LA1505.c -> swapping of two integers using functions

16. LAB16 (19-02-26)
   1601. LA1601.c -> sum of elements of 1D Array using functions
   1602. LA1602.c -> sort the elements of 1D Array in ascending order
   1603. LA1603.c -> find the largest and smallest in 1D Array
   1604. LA1604.c -> find the second largest in 1D Array
   1605. LA1605.c -> swap the first and last element in 1D Array

17. LAB17 (23-02-26)
   1701. LA1701.c -> sum of elements of 2D Array using functions
   1702. LA1702.c -> sum of main diagonals of 2D Array
   1703. LA1703.c -> find the largest and smallest of 2D Array
   1704. LA1704.c -> find the sum of prime numbers of 2D Array
   1705. LA1705.c -> addition of 2D Arrays using a 3rd matrix

18. LAB18 (09-03-26)
   1801. LA1801.c -> factorial of a number using recursion
   1802. LA1802.c -> GCD of two numbers using recursion
   1803. LA1803.c -> sum of digits upto single digit using recursion
   1804. LA1804.c -> sum of all digits using recursion
   1805. LA1805.c -> maximum element of an integer array by using recursion

19. LAB19 & LAB20 (12-03-26)
   1901. LA1901.c -> find length of a string (with/without library function)
   1902. LA1902.c -> extract last character of every word in a sentence
   1903. LA1903.c -> concatenate two strings without library function
   1904. LA1904.c -> check whether a string is palindrome or not
   1905. LA1905.c -> extract a substring from a given string
   1906. LA1906.c -> find the first largest word in a given sentence
   1907. LA1907.c -> count vowels, consonants, new lines and characters in a string
   1908. LA1908.c -> count frequency of each character in a string
   1909. LA1909.c -> replace occurrence of a character with its previous 3rd character
   1910. LA1910.c -> remove leading and trailing spaces from a string
   1911. LA1911.c -> replace multiple occurrences of a word with a single occurrence

20. LAB21 & LAB22 & LAB23 (16-03-26)
   2101. LA2101.c -> multiply two numbers using pointers
   2102. LA2102.c -> swap two numbers using call by reference
   2103. LA2103.c -> sum of all elements in an array using pointer
   2104. LA2104.c -> print a string in reverse using a pointer
   2105. LA2105.c -> count vowels and consonants in a string using pointer
   2106. LA2106.c -> sort an array using pointer
   2107. LA2107.c -> sum of all elements using dynamic memory allocation
   2108. LA2108.c -> largest element in an array using dynamic memory allocation
   2109. LA2109.c -> allocate array using calloc, insert, resize with realloc

21. LAB24 (19-03-26)
   2401. LA2401.c -> store and display one student's information using structure
   2402. LA2402.c -> store n students' info and display with total marks using array of structure
   2403. LA2403.c -> add two distances (km-meter) using structures
   2404. LA2404.c -> add two times (hr-min-sec) by passing structure to a function
   2405. LA2405.c -> store n employees' data and calculate gross pay using dynamic memory

22. LAB25 (23-03-26)
   2501. LA2501.c -> one by one & All together display of stored values in union
   2502. LA2502.c -> add, subtract, multiply and divide of two complex numbers using structures
   2503. LA2503.c -> Employee Gross Calculation using structures

Type 'q' to exit the list view, then enter your code.
============================================================
EOF

# 2. Show the list using less
less $CATALOGUE

# 3. Handle user input
while true; do
    read -p "Enter File Code or 'list or 'exit': " choice

    case $choice in
        list) less $CATALOGUE ;;
        
        # LAB 3
        301) gedit LAB3/LA301.c ;;
        302) gedit LAB3/LA302.c ;;
        303) gedit LAB3/LA303.c ;;
        304) gedit LAB3/LA304.c ;;
        305) gedit LAB3/LA305.c ;;

        # LAB 4
        401) gedit LAB4/LA401.c ;;
        402) gedit LAB4/LA402.c ;;
        403) gedit LAB4/LA403.c ;;
        404) gedit LAB4/LA404.c ;;
        405) gedit LAB4/LA405.c ;;

        # LAB 5 & 6
        501) gedit LAB5-6/LA501.c ;;
        502) gedit LAB5-6/LA502.c ;;
        503) gedit LAB5-6/LA503.c ;;
        504) gedit LAB5-6/LA504.c ;;
        505) gedit LAB5-6/LA505.c ;;
        506) gedit LAB5-6/LA506.c ;;
        507) gedit LAB5-6/LA507.c ;;
        508) gedit LAB5-6/LA508.c ;;
        509) gedit LAB5-6/LA509.c ;;
        510) gedit LAB5-6/LA510.c ;;

        # LAB 7
        701) gedit LAB7/LA701.c ;;
        702) gedit LAB7/LA702.c ;;
        703) gedit LAB7/LA703.c ;;
        704) gedit LAB7/LA704.c ;;
        705) gedit LAB7/LA705.c ;;
        706) gedit LAB7/LA706.c ;;

        # LAB 8
        801) gedit LAB8/LA801.c ;;
        802) gedit LAB8/LA802.c ;;
        803) gedit LAB8/LA803.c ;;
        804) gedit LAB8/LA804.c ;;
        805) gedit LAB8/LA805.c ;;
        806) gedit LAB8/LA806.c ;;
        807) gedit LAB8/LA807.c ;;
        808) gedit LAB8/LA808.c ;;

        # LAB 9 & 10
        901) gedit LAB9-10/LA901.c ;;
        902) gedit LAB9-10/LA902.c ;;
        903) gedit LAB9-10/LA903.c ;;
        904) gedit LAB9-10/LA904.c ;;
        905) gedit LAB9-10/LA905.c ;;
        906) gedit LAB9-10/LA906.c ;;
        907) gedit LAB9-10/LA907.c ;;
        
        # LAB 11
        1101) gedit LAB11/LA1101.c ;;
        1102) gedit LAB11/LA1102.c ;;
        1103) gedit LAB11/LA1103.c ;;
        1104) gedit LAB11/LA1104.c ;;
        1105) gedit LAB11/LA1105.c ;;

        # LAB 12
        1201) gedit LAB12/LA1201.c ;;
        1202) gedit LAB12/LA1202.c ;;
        1203) gedit LAB12/LA1203.c ;;
        1204) gedit LAB12/LA1204.c ;;
        1205) gedit LAB12/LA1205.c ;;

        # LAB 13 & 14
        1301) gedit LAB13-14/LA1301.c ;;
        1302) gedit LAB13-14/LA1302.c ;;
        1303) gedit LAB13-14/LA1303.c ;;
        1304) gedit LAB13-14/LA1304.c ;;
        1305) gedit LAB13-14/LA1305.c ;;

        # LAB 15
        1501) gedit LAB15/LA1501.c ;;
        1502) gedit LAB15/LA1502.c ;;
        1503) gedit LAB15/LA1503.c ;;
        1504) gedit LAB15/LA1504.c ;;
        1505) gedit LAB15/LA1505.c ;;

        # LAB 16
        1601) gedit LAB16/LA1601.c ;;
        1602) gedit LAB16/LA1602.c ;;
        1603) gedit LAB16/LA1603.c ;;
        1604) gedit LAB16/LA1604.c ;;
        1605) gedit LAB16/LA1605.c ;;

        # LAB 17
        1701) gedit LAB17/LA1701.c ;;
        1702) gedit LAB17/LA1702.c ;;
        1703) gedit LAB17/LA1703.c ;;
        1704) gedit LAB17/LA1704.c ;;
        1705) gedit LAB17/LA1705.c ;;

        # LAB 18
        1801) gedit LAB18/LA1801.c ;;
        1802) gedit LAB18/LA1802.c ;;
        1803) gedit LAB18/LA1803.c ;;
        1804) gedit LAB18/LA1804.c ;;
        1805) gedit LAB18/LA1805.c ;;

        # LAB 19
        1901) gedit LAB19/LA1901.c ;;
        1902) gedit LAB19/LA1902.c ;;
        1903) gedit LAB19/LA1903.c ;;
        1904) gedit LAB19/LA1904.c ;;
        1905) gedit LAB19/LA1905.c ;;
        1906) gedit LAB19/LA1906.c ;;
        1907) gedit LAB19/LA1907.c ;;
        1908) gedit LAB19/LA1908.c ;;
        1909) gedit LAB19/LA1909.c ;;
        1910) gedit LAB19/LA1910.c ;;
        1911) gedit LAB19/LA1911.c ;;

        # LAB 20
        2001) gedit LAB20/LA2001.c ;;
        2002) gedit LAB20/LA2002.c ;;
        2003) gedit LAB20/LA2003.c ;;
        2004) gedit LAB20/LA2004.c ;;
        2005) gedit LAB20/LA2005.c ;;
        2006) gedit LAB20/LA2006.c ;;
        2007) gedit LAB20/LA2007.c ;;
        2008) gedit LAB20/LA2008.c ;;
        2009) gedit LAB20/LA2009.c ;;

        # LAB 21
        2101) gedit LAB21/LA2101.c ;;
        2102) gedit LAB21/LA2102.c ;;
        2103) gedit LAB21/LA2103.c ;;
        2104) gedit LAB21/LA2104.c ;;
        2105) gedit LAB21/LA2105.c ;;

        # LAB 22
        2201) gedit LAB22/LA2201.c ;;
        2202) gedit LAB22/LA2202.c ;;
        2203) gedit LAB22/LA2203.c ;;

        # LAB 23
        2301) gedit LAB23/LA2301.c ;;
        2302) gedit LAB23/LA2302.c ;;
        2303) gedit LAB23/LA2303.c ;;
        2304) gedit LAB23/LA2304.c ;;
        2305) gedit LAB23/LA2305.c ;;
        2306) gedit LAB23/LA2306.c ;;
        2307) gedit LAB23/LA2307.c ;;
        2308) gedit LAB23/LA2308.c ;;

        exit) rm $CATALOGUE; exit ;;
        *) echo "Invalid selection: Type 'list' for help or 'exit' to quit." ;;
    esac
done
