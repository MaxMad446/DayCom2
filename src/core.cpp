// Auto-generated module | 2026-05-12T04:03:12.074609
#include <iostream>
#include <vector>

int compute_449() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
