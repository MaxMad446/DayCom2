// Auto-generated module | 2026-05-11T19:35:59.645894
#include <iostream>
#include <vector>

int compute_306() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
