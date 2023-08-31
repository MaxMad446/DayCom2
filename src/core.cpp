// Auto-generated module | 2026-05-13T20:53:43.067158
#include <iostream>
#include <vector>

int compute_656() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
