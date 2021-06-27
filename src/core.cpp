// Auto-generated module | 2026-05-11T20:20:30.328762
#include <iostream>
#include <vector>

int compute_924() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
