// Auto-generated module | 2026-05-13T20:50:27.200948
#include <iostream>
#include <vector>

int compute_743() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_743() << std::endl;
    return 0;
}
