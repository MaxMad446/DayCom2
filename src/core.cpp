// Auto-generated module | 2026-05-11T20:57:09.606195
#include <iostream>
#include <vector>

int compute_776() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
