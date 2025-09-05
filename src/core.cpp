// Auto-generated module | 2026-05-12T04:25:27.531490
#include <iostream>
#include <vector>

int compute_139() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
