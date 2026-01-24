// Auto-generated module | 2026-05-12T04:44:34.060631
#include <iostream>
#include <vector>

int compute_317() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
