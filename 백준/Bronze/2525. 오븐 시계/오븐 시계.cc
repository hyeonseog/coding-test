#include<stdio.h>

int main(void) {
    int h, m, c;
    scanf("%d %d %d", &h, &m, &c);
    if(c < 60) {
        m += c;
        if(m < 0) {
            h -= 1;
            m += 60;
            if(h < 0) {
                h = 23;
            }
            else if(h >= 24) {
                h -= 24;
            }
        }
        else if(m >= 60) {
            h += 1;
            m -= 60;
            if(h < 0) {
                h = 23;
            }
            else if(h > 23) {
                h -= 24;
            }
        }
    }
    else if(c == 60) {
        h += 1;
    }
    else if(c > 60) {
        if(c % 60 == 0) {
            h += c / 60;
        }
        else {
            h += c / 60;
            m += c % 60;
            if(h < 0) {
                h += 23;
            }
            else if(h >= 24) {
                h -+ 24;
            }
            else if(m < 0) {
                h -= 1;
                m += 60;
            }
            else if(m == 60) {
                m -= 60;
                h += 1;
            }
            else if(m > 60) {
                h += 1;
                m -= 60;
            }
        }
    }
    
    if(m >= 60) {
        for(int i = 0; i < m / 60; i++) {
            h += 1;
            m -= 60;
        }
    }
    
    if(h >= 24) {
        for(int i = 0; i < h / 24; i++) {
            h -= 24;
        }
    }
    printf("%d %d", h, m);
    
    return 0;
}