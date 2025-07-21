// Auto-generated module | 2026-05-12T04:19:23.868170
#include <iostream>
#include <vector>

int compute_839() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_839() << std::endl;
    return 0;
}
