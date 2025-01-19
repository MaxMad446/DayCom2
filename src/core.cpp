// Auto-generated module | 2026-05-12T21:09:34.972747
#include <iostream>
#include <vector>

int compute_893() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
