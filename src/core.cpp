// Auto-generated module | 2026-05-12T04:03:43.597724
#include <iostream>
#include <vector>

int compute_153() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_153() << std::endl;
    return 0;
}
