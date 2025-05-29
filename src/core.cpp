// Auto-generated module | 2026-05-12T04:12:16.901420
#include <iostream>
#include <vector>

int compute_133() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
