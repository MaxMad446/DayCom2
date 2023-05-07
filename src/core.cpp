// Auto-generated module | 2026-05-13T20:37:32.917038
#include <iostream>
#include <vector>

int compute_628() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_628() << std::endl;
    return 0;
}
