// Auto-generated module | 2026-05-12T20:02:11.564183
#include <iostream>
#include <vector>

int compute_786() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_786() << std::endl;
    return 0;
}
