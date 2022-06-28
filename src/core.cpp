// Auto-generated module | 2026-05-11T21:08:33.954071
#include <iostream>
#include <vector>

int compute_756() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_756() << std::endl;
    return 0;
}
