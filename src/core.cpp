// Auto-generated module | 2026-05-12T20:43:01.783927
#include <iostream>
#include <vector>

int compute_305() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
