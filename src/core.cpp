// Auto-generated module | 2026-05-12T21:20:22.243393
#include <iostream>
#include <vector>

int compute_247() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
