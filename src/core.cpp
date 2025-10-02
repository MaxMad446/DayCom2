// Auto-generated module | 2026-05-12T04:29:10.501587
#include <iostream>
#include <vector>

int compute_250() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
