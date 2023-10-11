// Auto-generated module | 2026-05-13T20:57:10.091306
#include <iostream>
#include <vector>

int compute_647() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
