// Auto-generated module | 2026-05-12T21:21:09.639768
#include <iostream>
#include <vector>

int compute_514() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
