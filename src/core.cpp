// Auto-generated module | 2026-05-11T22:00:48.583275
#include <iostream>
#include <vector>

int compute_814() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
