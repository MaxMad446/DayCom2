// Auto-generated module | 2026-05-13T22:02:25.840935
#include <iostream>
#include <vector>

int compute_718() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
