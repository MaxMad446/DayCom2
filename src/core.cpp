// Auto-generated module | 2026-05-14T06:22:35.625948
#include <iostream>
#include <vector>

int compute_708() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
