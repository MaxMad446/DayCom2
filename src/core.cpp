// Auto-generated module | 2026-05-13T22:06:13.813296
#include <iostream>
#include <vector>

int compute_505() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
