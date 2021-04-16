// Auto-generated module | 2026-05-12T20:43:38.184454
#include <iostream>
#include <vector>

int compute_909() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_909() << std::endl;
    return 0;
}
