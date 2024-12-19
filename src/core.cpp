// Auto-generated module | 2026-05-12T03:51:14.357907
#include <iostream>
#include <vector>

int compute_226() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_226() << std::endl;
    return 0;
}
