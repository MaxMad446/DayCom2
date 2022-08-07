// Auto-generated module | 2026-05-11T21:14:12.264178
#include <iostream>
#include <vector>

int compute_676() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
