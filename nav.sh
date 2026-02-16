#!/bin/bash

# 1. Create a temporary menu file to display your text
CATALOGUE=".lab_list.txt"
cat << EOF > $CATALOGUE
================ LAB ASSIGNMENTS INDEX ================

a. LAB3 (11-12-25)
   a1. LA301.c -> addition of two integers
   a2. LA302.c -> centigrade to fahrenheit
   a3. LA303.c -> area of a circle
   a4. LA304.c -> area of a triangle
   a5. LA305.c -> swapping of two integers using third variable

b. LAB4 (15-12-25)
   b1. LA401.c -> seconds into hour, minute and second
   b2. LA402.c -> distance into kilometer and meter
   b3. LA403.c -> sum of first and last of a 6 digit number
   b4. LA404.c -> sum of all digits of a three-digit number
   b5. LA405.c -> find profit & loss

c. LAB5 & LAB6 (18-12-25 & 05-01-26)
   c1. LA501.c -> largest between two numbers
   c2. LA502.c -> lowercase to uppercase
   c3. LA503.c -> vowel or consonant
   c4. LA504.c -> leap year check
   c5. LA505.c -> roots of quadratic (if-else)
   c6. LA506.c -> KIIT grading system
   c7. LA507.c -> menu calculator
   c8. LA508.c -> weekday name (switch)
   c9. LA509.c -> KIIT grading (if-else)
   c10. LA510.c -> roots of quadratic (switch)

d. LAB7 (08-01-26)
   d1. LA701.c -> even series within 50
   d2. LA702.c -> natural numbers 1 to n
   d3. LA703.c -> natural numbers n to 1
   d4. LA704.c -> sum and average of 10 numbers
   d5. LA705.c -> sum of digits
   d6. LA706.c -> reverse of a number

e. LAB8 (12-01-26)
   e1. LA801.c -> fibonacci series
   e2. LA802.c -> perfect number
   e3. LA803.c -> prime number
   e4. LA804.c -> lucas sequence
   e5. LA805.c -> gcd and lcm
   e6. LA806.c -> factorial
   e7. LA807.c -> strong number
   e8. LA808.c -> display series (0 1 1 2 4 7 13 24 44)

f. LAB9 & LAB10 (15-01-26 & 19-01-26)
   f1. LA901.c -> sum of series [ 1+2^2+...+n^n ]
   f2. LA902.c -> sum of series [ 1 + √2 + √3 + ... + √n ]
   f3. LA903.c -> pattern 1
   f4. LA904.c -> pattern 2
   f5. LA905.c -> pattern 3
   f6. LA906.c -> pattern 4
   f7. LA907.c -> pattern 5

k. LAB11 (22-01-26)
   k1. LA1101.c -> create an array and display elements
   k2. LA1102.c -> sum of numbers stored in an array
   k3. LA1103.c -> average of numbers stored in an array
   k4. LA1104.c -> largest element stored in an array
   k5. LA1105.c -> insert an element in an 1-D array

l. LAB12 (29-01-26)
   l1. LA1201.c -> display array elements in ascending order
   l2. LA1202.c -> print all unique elements of an array
   l3. LA1203.c -> print all even even and odd of an array
   l4. LA1204.c -> reverse the array elements
   l5. LA1205.c -> find a subarray that adds to given sum

m. LAB13 & LAB14 (02-02-26)
   m1. LA1301.c -> store city, day and temp in a 2D array
   m2. LA1302.c -> sum of 2 matrices (2x2)
   m3. LA1303.c -> multiply 2 matrices and display
   m4. LA1304.c -> sum of elements of matrix in its upper triangle
   m5. LA1305.c -> check 2 matrices are equal or not

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
        a1) gedit LAB3/LA301.c ;;
        a2) gedit LAB3/LA302.c ;;
        a3) gedit LAB3/LA303.c ;;
        a4) gedit LAB3/LA304.c ;;
        a5) gedit LAB3/LA305.c ;;

        # LAB 4
        b1) gedit LAB4/LA401.c ;;
        b2) gedit LAB4/LA402.c ;;
        b3) gedit LAB4/LA403.c ;;
        b4) gedit LAB4/LA404.c ;;
        b5) gedit LAB4/LA405.c ;;

        # LAB 5 & 6
        c1) gedit LAB5-6/LA501.c ;;
        c2) gedit LAB5-6/LA502.c ;;
        c3) gedit LAB5-6/LA503.c ;;
        c4) gedit LAB5-6/LA504.c ;;
        c5) gedit LAB5-6/LA505.c ;;
        c6) gedit LAB5-6/LA506.c ;;
        c7) gedit LAB5-6/LA507.c ;;
        c8) gedit LAB5-6/LA508.c ;;
        c9) gedit LAB5-6/LA509.c ;;
        c10) gedit LAB5-6/LA510.c ;;

        # LAB 7
        d1) gedit LAB7/LA701.c ;;
        d2) gedit LAB7/LA702.c ;;
        d3) gedit LAB7/LA703.c ;;
        d4) gedit LAB7/LA704.c ;;
        d5) gedit LAB7/LA705.c ;;
        d6) gedit LAB7/LA706.c ;;

        # LAB 8
        e1) gedit LAB8/LA801.c ;;
        e2) gedit LAB8/LA802.c ;;
        e3) gedit LAB8/LA803.c ;;
        e4) gedit LAB8/LA804.c ;;
        e5) gedit LAB8/LA805.c ;;
        e6) gedit LAB8/LA806.c ;;
        e7) gedit LAB8/LA807.c ;;
        e8) gedit LAB8/LA808.c ;;

        # LAB 9 & 10
        f1) gedit LAB9-10/LA901.c ;;
        f2) gedit LAB9-10/LA902.c ;;
        f3) gedit LAB9-10/LA903.c ;;
        f4) gedit LAB9-10/LA904.c ;;
        f5) gedit LAB9-10/LA905.c ;;
        f6) gedit LAB9-10/LA906.c ;;
        f7) gedit LAB9-10/LA907.c ;;
        
        # LAB 11
        k1) gedit LAB11/LA1101.c ;;
        k2) gedit LAB11/LA1102.c ;;
        k3) gedit LAB11/LA1103.c ;;
        k4) gedit LAB11/LA1104.c ;;
        k5) gedit LAB11/LA1105.c ;;

        # LAB 12
        l1) gedit LAB12/LA1201.c ;;
        l2) gedit LAB12/LA1202.c ;;
        l3) gedit LAB12/LA1203.c ;;
        l4) gedit LAB12/LA1204.c ;;
        l5) gedit LAB12/LA1205.c ;;

        # LAB 13 & 14
        m1) gedit LAB13/LA1301.c ;;
        m2) gedit LAB13/LA1302.c ;;
        m3) gedit LAB13/LA1303.c ;;
        m4) gedit LAB13/LA1304.c ;;
        m5) gedit LAB13/LA1305.c ;;

        exit) rm $CATALOGUE; exit ;;
        *) echo "Invalid selection: Type 'list' for help or 'exit' to quit." ;;
    esac
done
