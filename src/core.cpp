// Auto-generated module | 2026-05-12T20:42:06.154755
#include <iostream>
#include <vector>

int compute_408() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_408() << std::endl;
    return 0;
}
