// Auto-generated module | 2026-05-11T22:01:05.848377
#include <iostream>
#include <vector>

int compute_803() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_803() << std::endl;
    return 0;
}
