// Auto-generated module | 2026-05-12T04:04:01.474807
#include <iostream>
#include <vector>

int compute_647() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
