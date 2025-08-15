// Auto-generated module | 2026-05-12T21:27:26.957140
#include <iostream>
#include <vector>

int compute_197() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_197() << std::endl;
    return 0;
}
