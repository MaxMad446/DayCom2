// Auto-generated module | 2026-05-11T20:54:07.877698
#include <iostream>
#include <vector>

int compute_346() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
