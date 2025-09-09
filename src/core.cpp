// Auto-generated module | 2026-05-12T04:26:01.723896
#include <iostream>
#include <vector>

int compute_608() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
