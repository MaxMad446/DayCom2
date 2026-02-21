// Auto-generated module | 2026-05-12T04:48:25.900703
#include <iostream>
#include <vector>

int compute_634() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
