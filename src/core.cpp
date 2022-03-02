// Auto-generated module | 2026-05-11T20:53:00.844360
#include <iostream>
#include <vector>

int compute_868() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
