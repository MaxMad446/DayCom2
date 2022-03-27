// Auto-generated module | 2026-05-13T22:07:41.780946
#include <iostream>
#include <vector>

int compute_353() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_353() << std::endl;
    return 0;
}
