// Auto-generated module | 2026-05-12T20:50:28.658371
#include <iostream>
#include <vector>

int compute_685() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
