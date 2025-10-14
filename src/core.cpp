// Auto-generated module | 2026-05-12T04:30:42.561694
#include <iostream>
#include <vector>

int compute_742() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
