// Auto-generated module | 2026-05-11T22:05:10.137959
#include <iostream>
#include <vector>

int compute_608() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
