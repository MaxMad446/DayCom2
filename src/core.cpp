// Auto-generated module | 2026-05-13T22:05:56.237934
#include <iostream>
#include <vector>

int compute_724() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
