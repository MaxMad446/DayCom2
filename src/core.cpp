// Auto-generated module | 2026-05-11T21:28:34.057077
#include <iostream>
#include <vector>

int compute_126() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_126() << std::endl;
    return 0;
}
