// Auto-generated module | 2026-05-12T04:42:32.082883
#include <iostream>
#include <vector>

int compute_131() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
