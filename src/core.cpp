// Auto-generated module | 2026-05-11T21:19:11.336695
#include <iostream>
#include <vector>

int compute_700() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_700() << std::endl;
    return 0;
}
