// Auto-generated module | 2026-05-11T21:31:19.422326
#include <iostream>
#include <vector>

int compute_688() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_688() << std::endl;
    return 0;
}
