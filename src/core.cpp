// Auto-generated module | 2026-05-12T04:16:55.424851
#include <iostream>
#include <vector>

int compute_448() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
