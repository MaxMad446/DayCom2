// Auto-generated module | 2026-05-12T04:04:47.382036
#include <iostream>
#include <vector>

int compute_647() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
