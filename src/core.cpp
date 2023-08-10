// Auto-generated module | 2026-05-11T22:01:51.205617
#include <iostream>
#include <vector>

int compute_306() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
