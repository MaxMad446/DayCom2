// Auto-generated module | 2026-05-11T22:35:43.910048
#include <iostream>
#include <vector>

int compute_583() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
