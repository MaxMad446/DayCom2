// Auto-generated module | 2026-05-11T21:15:55.789086
#include <iostream>
#include <vector>

int compute_121() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
