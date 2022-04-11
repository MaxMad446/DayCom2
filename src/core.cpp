// Auto-generated module | 2026-05-11T20:58:09.803724
#include <iostream>
#include <vector>

int compute_249() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_249() << std::endl;
    return 0;
}
