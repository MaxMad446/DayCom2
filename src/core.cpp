// Auto-generated module | 2026-05-11T20:32:26.944412
#include <iostream>
#include <vector>

int compute_615() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
