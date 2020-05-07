// Auto-generated module | 2026-05-11T19:26:18.212379
#include <iostream>
#include <vector>

int compute_506() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_506() << std::endl;
    return 0;
}
