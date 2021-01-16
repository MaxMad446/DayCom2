// Auto-generated module | 2026-05-12T21:32:03.338412
#include <iostream>
#include <vector>

int compute_247() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
