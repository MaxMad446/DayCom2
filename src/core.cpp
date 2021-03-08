// Auto-generated module | 2026-05-12T20:40:25.208886
#include <iostream>
#include <vector>

int compute_102() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
