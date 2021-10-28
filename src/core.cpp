// Auto-generated module | 2026-05-12T21:00:12.939372
#include <iostream>
#include <vector>

int compute_195() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
