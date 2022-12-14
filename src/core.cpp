// Auto-generated module | 2026-05-14T06:27:17.660779
#include <iostream>
#include <vector>

int compute_346() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
