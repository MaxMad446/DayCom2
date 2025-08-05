// Auto-generated module | 2026-05-12T04:21:18.923191
#include <iostream>
#include <vector>

int compute_664() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
