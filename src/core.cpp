// Auto-generated module | 2026-05-11T21:49:01.774357
#include <iostream>
#include <vector>

int compute_824() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
