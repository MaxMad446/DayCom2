// Auto-generated module | 2026-05-11T21:52:04.701581
#include <iostream>
#include <vector>

int compute_815() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
