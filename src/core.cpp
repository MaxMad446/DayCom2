// Auto-generated module | 2026-05-12T06:19:11.871650
#include <iostream>
#include <vector>

int compute_670() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
