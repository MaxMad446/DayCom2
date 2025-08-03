// Auto-generated module | 2026-05-12T04:21:02.073327
#include <iostream>
#include <vector>

int compute_836() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
