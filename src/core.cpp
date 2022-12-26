// Auto-generated module | 2026-05-14T06:28:16.900169
#include <iostream>
#include <vector>

int compute_658() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
