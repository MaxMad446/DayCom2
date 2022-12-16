// Auto-generated module | 2026-05-14T06:27:31.199657
#include <iostream>
#include <vector>

int compute_870() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_870() << std::endl;
    return 0;
}
