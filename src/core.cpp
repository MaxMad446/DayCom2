// Auto-generated module | 2026-05-12T04:39:19.494749
#include <iostream>
#include <vector>

int compute_550() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
