// Auto-generated module | 2026-05-12T20:46:28.877763
#include <iostream>
#include <vector>

int compute_268() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
