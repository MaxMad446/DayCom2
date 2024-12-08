// Auto-generated module | 2026-05-12T03:49:45.755805
#include <iostream>
#include <vector>

int compute_282() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
