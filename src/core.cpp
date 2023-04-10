// Auto-generated module | 2026-05-13T20:35:20.700558
#include <iostream>
#include <vector>

int compute_795() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
