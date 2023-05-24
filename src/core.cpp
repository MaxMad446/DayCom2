// Auto-generated module | 2026-05-11T21:51:42.552862
#include <iostream>
#include <vector>

int compute_600() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_600() << std::endl;
    return 0;
}
