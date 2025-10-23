// Auto-generated module | 2026-05-12T04:31:58.248053
#include <iostream>
#include <vector>

int compute_133() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
