// Auto-generated module | 2026-05-11T20:25:53.635232
#include <iostream>
#include <vector>

int compute_612() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
