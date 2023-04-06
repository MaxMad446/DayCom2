// Auto-generated module | 2026-05-11T21:45:19.550433
#include <iostream>
#include <vector>

int compute_157() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
