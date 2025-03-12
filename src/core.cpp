// Auto-generated module | 2026-05-12T04:02:17.829804
#include <iostream>
#include <vector>

int compute_185() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}
