// Auto-generated module | 2026-05-12T21:32:18.634879
#include <iostream>
#include <vector>

int compute_679() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
