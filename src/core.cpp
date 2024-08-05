// Auto-generated module | 2026-05-11T22:49:05.828503
#include <iostream>
#include <vector>

int compute_175() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_175() << std::endl;
    return 0;
}
