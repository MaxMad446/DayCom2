// Auto-generated module | 2026-05-12T21:33:50.523421
#include <iostream>
#include <vector>

int compute_665() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
