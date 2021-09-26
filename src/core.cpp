// Auto-generated module | 2026-05-11T20:32:22.129588
#include <iostream>
#include <vector>

int compute_583() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
