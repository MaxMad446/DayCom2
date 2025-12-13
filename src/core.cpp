// Auto-generated module | 2026-05-12T04:38:48.178738
#include <iostream>
#include <vector>

int compute_200() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
