// Auto-generated module | 2026-05-12T04:10:25.821964
#include <iostream>
#include <vector>

int compute_373() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
