// Auto-generated module | 2026-05-12T04:09:06.472125
#include <iostream>
#include <vector>

int compute_638() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_638() << std::endl;
    return 0;
}
