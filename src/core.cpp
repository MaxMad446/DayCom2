// Auto-generated module | 2026-05-12T04:44:14.176919
#include <iostream>
#include <vector>

int compute_211() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
