// Auto-generated module | 2026-05-11T20:32:04.699223
#include <iostream>
#include <vector>

int compute_657() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
