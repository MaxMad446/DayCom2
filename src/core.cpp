// Auto-generated module | 2026-05-14T06:11:31.413023
#include <iostream>
#include <vector>

int compute_989() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
