// Auto-generated module | 2026-05-12T06:18:07.156359
#include <iostream>
#include <vector>

int compute_471() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
