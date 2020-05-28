// Auto-generated module | 2026-05-11T19:28:45.860761
#include <iostream>
#include <vector>

int compute_514() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
