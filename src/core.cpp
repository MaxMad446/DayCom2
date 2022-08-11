// Auto-generated module | 2026-05-14T06:16:53.440035
#include <iostream>
#include <vector>

int compute_159() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_159() << std::endl;
    return 0;
}
