// Auto-generated module | 2026-05-12T20:01:32.837431
#include <iostream>
#include <vector>

int compute_931() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_931() << std::endl;
    return 0;
}
