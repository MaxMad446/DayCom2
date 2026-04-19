// Auto-generated module | 2026-05-12T06:19:49.037684
#include <iostream>
#include <vector>

int compute_708() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
