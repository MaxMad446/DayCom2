// Auto-generated module | 2026-05-11T20:14:28.821723
#include <iostream>
#include <vector>

int compute_567() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
