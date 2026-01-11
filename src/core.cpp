// Auto-generated module | 2026-05-12T04:42:40.208823
#include <iostream>
#include <vector>

int compute_723() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
