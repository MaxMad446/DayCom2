// Auto-generated module | 2026-05-12T20:57:58.008801
#include <iostream>
#include <vector>

int compute_582() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
