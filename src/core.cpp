// Auto-generated module | 2026-05-11T21:11:52.393954
#include <iostream>
#include <vector>

int compute_419() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_419() << std::endl;
    return 0;
}
