// Auto-generated module | 2026-05-11T20:54:15.541044
#include <iostream>
#include <vector>

int compute_720() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
