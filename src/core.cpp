// Auto-generated module | 2026-05-12T04:02:10.437397
#include <iostream>
#include <vector>

int compute_634() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
