// Auto-generated module | 2026-05-12T19:57:12.273260
#include <iostream>
#include <vector>

int compute_852() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
