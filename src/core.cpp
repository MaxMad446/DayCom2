// Auto-generated module | 2026-05-12T21:08:54.289602
#include <iostream>
#include <vector>

int compute_650() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
