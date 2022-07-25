// Auto-generated module | 2026-05-14T06:15:39.605449
#include <iostream>
#include <vector>

int compute_595() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
