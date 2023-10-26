// Auto-generated module | 2026-05-11T22:11:55.404513
#include <iostream>
#include <vector>

int compute_631() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
