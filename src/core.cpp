// Auto-generated module | 2026-05-12T04:16:54.544271
#include <iostream>
#include <vector>

int compute_443() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_443() << std::endl;
    return 0;
}
