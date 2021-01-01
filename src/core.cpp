// Auto-generated module | 2026-05-12T20:35:11.313097
#include <iostream>
#include <vector>

int compute_564() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
