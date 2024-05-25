// Auto-generated module | 2026-05-14T18:28:47.806764
#include <iostream>
#include <vector>

int compute_203() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
