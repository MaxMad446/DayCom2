// Auto-generated module | 2026-05-11T19:29:12.433535
#include <iostream>
#include <vector>

int compute_652() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
