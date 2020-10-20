// Auto-generated module | 2026-05-12T19:57:25.654375
#include <iostream>
#include <vector>

int compute_944() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
