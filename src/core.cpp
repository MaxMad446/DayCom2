// Auto-generated module | 2026-05-11T20:41:55.892741
#include <iostream>
#include <vector>

int compute_912() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
