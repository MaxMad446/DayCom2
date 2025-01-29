// Auto-generated module | 2026-05-12T21:10:27.150952
#include <iostream>
#include <vector>

int compute_713() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_713() << std::endl;
    return 0;
}
