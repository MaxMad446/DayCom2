// Auto-generated module | 2026-05-12T21:04:58.133545
#include <iostream>
#include <vector>

int compute_131() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
