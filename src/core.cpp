// Auto-generated module | 2026-05-12T21:04:38.343337
#include <iostream>
#include <vector>

int compute_268() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
