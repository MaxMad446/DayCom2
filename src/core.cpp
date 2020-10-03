// Auto-generated module | 2026-05-11T19:45:45.495389
#include <iostream>
#include <vector>

int compute_546() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
