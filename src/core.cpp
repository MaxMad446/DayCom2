// Auto-generated module | 2026-05-12T06:18:40.045670
#include <iostream>
#include <vector>

int compute_330() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
