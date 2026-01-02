// Auto-generated module | 2026-05-12T04:41:32.065797
#include <iostream>
#include <vector>

int compute_227() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
