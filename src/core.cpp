// Auto-generated module | 2026-05-14T06:26:45.413468
#include <iostream>
#include <vector>

int compute_591() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
