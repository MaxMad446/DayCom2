// Auto-generated module | 2026-05-11T20:10:32.451853
#include <iostream>
#include <vector>

int compute_593() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}
