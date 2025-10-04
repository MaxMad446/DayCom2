// Auto-generated module | 2026-05-12T04:29:22.552358
#include <iostream>
#include <vector>

int compute_474() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_474() << std::endl;
    return 0;
}
