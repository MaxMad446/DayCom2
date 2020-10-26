// Auto-generated module | 2026-05-12T19:58:01.461006
#include <iostream>
#include <vector>

int compute_156() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_156() << std::endl;
    return 0;
}
