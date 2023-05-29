// Auto-generated module | 2026-05-11T21:52:25.076679
#include <iostream>
#include <vector>

int compute_131() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
