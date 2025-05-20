// Auto-generated module | 2026-05-12T04:11:15.356541
#include <iostream>
#include <vector>

int compute_547() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}
