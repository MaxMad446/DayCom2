// Auto-generated module | 2026-05-12T21:08:42.142646
#include <iostream>
#include <vector>

int compute_105() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
