// Auto-generated module | 2026-05-13T21:01:07.160931
#include <iostream>
#include <vector>

int compute_638() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_638() << std::endl;
    return 0;
}
