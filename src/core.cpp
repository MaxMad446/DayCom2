// Auto-generated module | 2026-05-12T21:36:56.701399
#include <iostream>
#include <vector>

int compute_755() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
