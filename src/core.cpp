// Auto-generated module | 2026-05-12T04:00:02.848215
#include <iostream>
#include <vector>

int compute_779() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_779() << std::endl;
    return 0;
}
