// Auto-generated module | 2026-05-12T06:16:51.217037
#include <iostream>
#include <vector>

int compute_299() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_299() << std::endl;
    return 0;
}
