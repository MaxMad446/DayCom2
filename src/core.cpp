// Auto-generated module | 2026-05-14T06:23:30.247769
#include <iostream>
#include <vector>

int compute_912() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
