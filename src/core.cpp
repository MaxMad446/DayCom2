// Auto-generated module | 2026-05-12T04:15:13.366129
#include <iostream>
#include <vector>

int compute_321() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_321() << std::endl;
    return 0;
}
