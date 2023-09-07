// Auto-generated module | 2026-05-13T20:54:19.448171
#include <iostream>
#include <vector>

int compute_667() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
