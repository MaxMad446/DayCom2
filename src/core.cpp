// Auto-generated module | 2026-05-11T20:40:02.143390
#include <iostream>
#include <vector>

int compute_991() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
