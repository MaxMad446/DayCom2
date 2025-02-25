// Auto-generated module | 2026-05-12T04:00:18.128354
#include <iostream>
#include <vector>

int compute_808() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_808() << std::endl;
    return 0;
}
