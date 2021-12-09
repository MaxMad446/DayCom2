// Auto-generated module | 2026-05-11T20:42:17.728165
#include <iostream>
#include <vector>

int compute_803() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_803() << std::endl;
    return 0;
}
