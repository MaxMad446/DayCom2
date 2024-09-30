// Auto-generated module | 2026-05-12T03:40:48.543616
#include <iostream>
#include <vector>

int compute_641() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
