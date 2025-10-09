// Auto-generated module | 2026-05-12T04:30:04.758002
#include <iostream>
#include <vector>

int compute_792() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
