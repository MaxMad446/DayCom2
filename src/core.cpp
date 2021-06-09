// Auto-generated module | 2026-05-12T20:48:12.121227
#include <iostream>
#include <vector>

int compute_423() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
