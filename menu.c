#include "menu.h"
#include <stdio.h>
#include <string.h>

void display_menu() {
    int width = 48;  // 메뉴 화면의 가로 길이
    int height = 13;  // 메뉴 화면의 세로 길이
    char screen[(width + 1) * height];  // 가로 길이 * 세로 길이의 문자 배열 선언

    // 메뉴 화면 초기화
    int i, j;
    for (j = 0; j < height; j++) {
        for (i = 0; i < width; i++) {
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1)
                screen[i + j * (width + 1)] = '#';  // 테두리를 '#'으로 설정
            else
                screen[i + j * (width + 1)] = ' ';  // 내부를 공백으로 설정
        }
        screen[width + j * (width + 1)] = '\n';  // 각 줄의 끝에 개행 문자 추가
    }

    char* title = "American sniper";  // 타이틀 문자열
    int title_length = strlen(title);  // 타이틀의 길이
    int title_start_x = (width - title_length) / 2;  // 타이틀 시작 위치의 x좌표
    int title_start_y = height / 2 - 4;  // 타이틀 시작 위치의 y좌표

    // 타이틀을 메뉴 화면에 추가
    for (i = 0; i < title_length; i++) {
        screen[title_start_x + i + title_start_y * (width + 1)] = title[i];
    }

    char* version = "-V0.1-";  // 버전 문자열
    int version_length = strlen(version);  // 버전의 길이
    int version_start_x = (width - version_length) / 2;  // 버전 시작 위치의 x좌표
    int version_start_y = height / 2;  // 버전 시작 위치의 y좌표

    // 버전을 메뉴 화면에 추가
    for (i = 0; i < version_length; i++) {
        screen[version_start_x + i + version_start_y * (width + 1)] = version[i];
    }

    char* option1 = "1.GAME START";  // 옵션 1 문자열
    int option1_length = strlen(option1);  // 옵션 1의 길이
    int option1_start_x = (width - option1_length) / 2;  // 옵션 1 시작 위치의 x좌표
    int option1_start_y = height / 2 + 2;  // 옵션 1 시작 위치의 y좌표

    // 옵션 1을 메뉴 화면에 추가
    for (i = 0; i < option1_length; i++) {
        screen[option1_start_x + i + option1_start_y * (width + 1)] = option1[i];
    }

    char* option2 = "2.How TO Play";  // 옵션 2 문자열
    int option2_length = strlen(option2);  // 옵션 2의 길이
    int option2_start_x = (width - option2_length) / 2;  // 옵션 2 시작 위치의 x좌표
    int option2_start_y = height / 2 + 4;  // 옵션 2 시작 위치의 y좌표

    // 옵션 2를 메뉴 화면에 추가
    for (i = 0; i < option2_length; i++) {
        screen[option2_start_x + i + option2_start_y * (width + 1)] = option2[i];
    }

    char* option3 = "3.EXIT";  // 옵션 3 문자열
    int option3_length = strlen(option3);  // 옵션 3의 길이
    int option3_start_x = (width - option3_length) / 2;  // 옵션 3 시작 위치의 x좌표
    int option3_start_y = height / 2 + 5;  // 옵션 3 시작 위치의 y좌표

    // 옵션 3을 메뉴 화면에 추가
    for (i = 0; i < option3_length; i++) {
        screen[option3_start_x + i + option3_start_y * (width + 1)] = option3[i];
    }

    // 옵션 3의 아래에 테두리를 추가
    for (i = 0; i < width; i++) {
        if (screen[i + (option3_start_y + 1) * (width + 1)] == ' ')
            screen[i + (option3_start_y + 1) * (width + 1)] = '#';
    }

    printf("%s\n", screen);  // 메뉴 화면 출력
}
