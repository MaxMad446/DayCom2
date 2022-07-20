// Auto-generated module | 2026-05-11T21:11:46.129005
#include <iostream>
#include <vector>

int compute_579() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_579() << std::endl;
    return 0;
}
