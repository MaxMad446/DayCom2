// Auto-generated module | 2026-05-12T04:11:24.616097
#include <iostream>
#include <vector>

int compute_195() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
