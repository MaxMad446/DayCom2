// Auto-generated module | 2026-05-12T21:32:04.794026
#include <iostream>
#include <vector>

int compute_797() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
