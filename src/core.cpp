// Auto-generated module | 2026-05-12T20:56:49.721669
#include <iostream>
#include <vector>

int compute_673() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
