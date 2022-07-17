// Auto-generated module | 2026-05-14T06:14:59.547363
#include <iostream>
#include <vector>

int compute_139() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
