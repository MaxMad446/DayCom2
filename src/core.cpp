// Auto-generated module | 2026-05-13T20:46:42.558129
#include <iostream>
#include <vector>

int compute_326() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
