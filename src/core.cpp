// Auto-generated module | 2026-05-12T04:11:04.088395
#include <iostream>
#include <vector>

int compute_812() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
