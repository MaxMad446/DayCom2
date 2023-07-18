// Auto-generated module | 2026-05-11T21:58:56.667613
#include <iostream>
#include <vector>

int compute_257() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_257() << std::endl;
    return 0;
}
