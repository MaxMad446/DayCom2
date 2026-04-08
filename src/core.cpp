// Auto-generated module | 2026-05-12T06:18:20.044663
#include <iostream>
#include <vector>

int compute_546() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
