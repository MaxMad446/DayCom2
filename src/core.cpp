// Auto-generated module | 2026-05-12T20:53:29.006909
#include <iostream>
#include <vector>

int compute_241() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_241() << std::endl;
    return 0;
}
