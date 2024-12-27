// Auto-generated module | 2026-05-12T03:52:23.612540
#include <iostream>
#include <vector>

int compute_938() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
