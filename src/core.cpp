// Auto-generated module | 2026-05-13T20:58:23.188738
#include <iostream>
#include <vector>

int compute_857() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
