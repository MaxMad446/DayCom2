// Auto-generated module | 2026-05-14T06:19:22.315884
#include <iostream>
#include <vector>

int compute_501() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_501() << std::endl;
    return 0;
}
