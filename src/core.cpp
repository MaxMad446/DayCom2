// Auto-generated module | 2026-05-11T21:59:08.249997
#include <iostream>
#include <vector>

int compute_175() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_175() << std::endl;
    return 0;
}
