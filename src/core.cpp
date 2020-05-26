// Auto-generated module | 2026-05-11T19:28:29.415241
#include <iostream>
#include <vector>

int compute_277() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_277() << std::endl;
    return 0;
}
