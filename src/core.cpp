// Auto-generated module | 2026-05-12T03:50:21.973361
#include <iostream>
#include <vector>

int compute_550() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
