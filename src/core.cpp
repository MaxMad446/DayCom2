// Auto-generated module | 2026-05-11T22:24:06.631000
#include <iostream>
#include <vector>

int compute_107() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
