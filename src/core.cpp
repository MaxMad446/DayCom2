// Auto-generated module | 2026-05-14T06:17:34.380231
#include <iostream>
#include <vector>

int compute_279() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_279() << std::endl;
    return 0;
}
