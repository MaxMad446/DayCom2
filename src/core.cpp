// Auto-generated module | 2026-05-12T04:23:59.844544
#include <iostream>
#include <vector>

int compute_646() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_646() << std::endl;
    return 0;
}
