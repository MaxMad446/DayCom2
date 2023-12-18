// Auto-generated module | 2026-05-13T21:02:48.956629
#include <iostream>
#include <vector>

int compute_131() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
