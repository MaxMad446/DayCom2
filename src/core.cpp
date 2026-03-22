// Auto-generated module | 2026-05-12T06:16:14.357848
#include <iostream>
#include <vector>

int compute_827() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
