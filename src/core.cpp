// Auto-generated module | 2026-05-11T19:49:39.364072
#include <iostream>
#include <vector>

int compute_160() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
