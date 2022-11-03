// Auto-generated module | 2026-05-14T06:23:50.774643
#include <iostream>
#include <vector>

int compute_946() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_946() << std::endl;
    return 0;
}
