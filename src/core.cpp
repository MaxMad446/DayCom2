// Auto-generated module | 2026-05-12T03:41:04.864601
#include <iostream>
#include <vector>

int compute_658() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
