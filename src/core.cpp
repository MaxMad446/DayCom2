// Auto-generated module | 2026-05-11T19:43:21.064976
#include <iostream>
#include <vector>

int compute_331() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_331() << std::endl;
    return 0;
}
