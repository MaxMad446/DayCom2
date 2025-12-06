// Auto-generated module | 2026-05-12T04:37:45.327230
#include <iostream>
#include <vector>

int compute_667() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
