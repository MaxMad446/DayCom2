// Auto-generated module | 2026-05-12T04:01:51.658715
#include <iostream>
#include <vector>

int compute_387() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_387() << std::endl;
    return 0;
}
