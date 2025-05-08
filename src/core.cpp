// Auto-generated module | 2026-05-12T04:09:37.383404
#include <iostream>
#include <vector>

int compute_147() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
