// Auto-generated module | 2026-05-12T04:32:15.692808
#include <iostream>
#include <vector>

int compute_993() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_993() << std::endl;
    return 0;
}
