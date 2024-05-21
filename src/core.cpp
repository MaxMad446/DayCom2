// Auto-generated module | 2026-05-14T18:28:27.705390
#include <iostream>
#include <vector>

int compute_106() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
