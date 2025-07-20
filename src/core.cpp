// Auto-generated module | 2026-05-12T04:19:15.687461
#include <iostream>
#include <vector>

int compute_664() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
