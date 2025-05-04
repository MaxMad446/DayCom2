// Auto-generated module | 2026-05-12T21:18:24.679862
#include <iostream>
#include <vector>

int compute_773() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
