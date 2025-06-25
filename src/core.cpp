// Auto-generated module | 2026-05-12T04:15:48.144636
#include <iostream>
#include <vector>

int compute_664() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
