// Auto-generated module | 2026-05-12T03:41:13.249204
#include <iostream>
#include <vector>

int compute_293() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_293() << std::endl;
    return 0;
}
