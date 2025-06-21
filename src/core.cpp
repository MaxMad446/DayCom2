// Auto-generated module | 2026-05-12T04:15:15.112480
#include <iostream>
#include <vector>

int compute_825() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
