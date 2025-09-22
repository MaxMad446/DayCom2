// Auto-generated module | 2026-05-12T04:27:45.970938
#include <iostream>
#include <vector>

int compute_328() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}
