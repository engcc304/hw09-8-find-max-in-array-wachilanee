/*
    ผู้ใช้กรอกค่าจำนวนที่ต้องการสร้างอาเรย์ พร้อมกับกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณแสดงค่าที่มาก "เป็นอันดับสาม" ของภายในอาเรย์
    
    Test case:
        Enter new element of Array :
            5
        Input :
            5
        Input :
            3
        Input :
            2
        Input :
            1
        Input :
            9           
    Output:
        Array: 5 3 2 1 9
        The large 3rd element = 3

    Test case:
        Enter new element of Array :
            8
        Input :
            6
        Input :
            7
        Input :
            11
        Input :
            13
        Input :
            15
        Input :
            49
        Input :
            27
        Input :        
            18
    Output:
        Array: 6 7 11 13 15 49 27 18
        The large 3rd element = 18
*/
 #include <stdio.h>

 int main() {
    
    int N, num[ 100 ], i, j, hold = 0 ;

    printf( "Enter new element of Array : " ) ;
    scanf( "%d", &N ) ;

    for ( i = 0 ; i < N ; i++ ) {
        printf( "Input : " ) ;
        scanf( "%d", &num[ i ] ) ;
    }

    printf("Array:") ;
    for ( i = 0 ; i < N ; i++ ) {
        printf( " %d", num[ i ] ) ;
    }

    for ( i = 0 ; i < N ; i++ ) {
        for ( j = i + 1 ; j < N ; j++ ) {
            if ( num[ i ] < num[ j ]  ) {
                hold = num[ i ] ;
                num[ i ] = num[ j ] ;
                num[ j ] = hold ;
            }
        }
    }

    printf( "\nThe large 3rd element = %d", num[ 2 ] ) ;
    
    
    
    return 0;
 }
 