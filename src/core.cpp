// Auto-generated module | 2026-05-12T21:16:27.723571
#include <iostream>
#include <vector>

int compute_665() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
