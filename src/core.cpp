// Auto-generated module | 2026-05-11T21:46:20.159581
#include <iostream>
#include <vector>

int compute_573() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_573() << std::endl;
    return 0;
}
