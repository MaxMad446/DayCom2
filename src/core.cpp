// Auto-generated module | 2026-05-14T18:04:52.995150
#include <iostream>
#include <vector>

int compute_905() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
