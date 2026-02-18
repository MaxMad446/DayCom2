// Auto-generated module | 2026-05-12T04:47:56.543604
#include <iostream>
#include <vector>

int compute_825() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
