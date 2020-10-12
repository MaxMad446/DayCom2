// Auto-generated module | 2026-05-11T19:47:01.638698
#include <iostream>
#include <vector>

int compute_576() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
