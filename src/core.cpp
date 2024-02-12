// Auto-generated module | 2026-05-11T22:26:16.046732
#include <iostream>
#include <vector>

int compute_675() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
