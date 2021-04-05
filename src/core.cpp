// Auto-generated module | 2026-05-12T21:38:28.625692
#include <iostream>
#include <vector>

int compute_448() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
