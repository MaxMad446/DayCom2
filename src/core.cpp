// Auto-generated module | 2026-05-14T06:14:39.580970
#include <iostream>
#include <vector>

int compute_650() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
