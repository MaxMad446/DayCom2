// Auto-generated module | 2026-05-12T04:40:14.058856
#include <iostream>
#include <vector>

int compute_703() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
