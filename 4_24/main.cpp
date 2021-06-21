//
//  main.cpp
//  4_24
//
//  Created by 세광 on 2021/06/21.
//

#include <iostream>

using namespace std;

int main() {
    int hour, minute, second;
    int time1, time2;
    
    scanf("%d:%d:%d", &hour, &minute, &second);
    time1 = hour * 3600 + minute * 60 + second;
    hour = minute = second = 0;
    
    scanf("%d:%d:%d", &hour, &minute, &second);
    time2 = hour * 3600 + minute * 60 + second;
    
    if(time1 < time2) {
        int left_time = time2 - time1;
        int left_hour = left_time / 3600;
        int left_minute = (left_time % 3600) / 60;
        int left_second = (left_time % 3600) % 60;
        printf("%02d:%02d:%02d\n", left_hour, left_minute, left_second);
    }
    
    else if(time1 > time2) {
        int left_time = 24 * 3600 + (time2 - time1);
        int left_hour = left_time / 3600;
        int left_minute = (left_time % 3600) / 60;
        int left_second = (left_time % 3600) % 60;
        printf("%02d:%02d:%02d\n", left_hour, left_minute, left_second);
    }
}
