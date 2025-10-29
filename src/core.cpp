// Auto-generated module | 2026-05-12T04:32:44.990800
#include <iostream>
#include <vector>

int compute_455() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
