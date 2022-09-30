// Auto-generated module | 2026-05-14T06:21:01.939821
#include <iostream>
#include <vector>

int compute_200() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
