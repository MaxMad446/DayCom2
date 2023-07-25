// Auto-generated module | 2026-05-13T20:50:43.721108
#include <iostream>
#include <vector>

int compute_344() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
