// Auto-generated module | 2026-05-12T20:38:32.795909
#include <iostream>
#include <vector>

int compute_740() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
