// Auto-generated module | 2026-05-12T03:46:12.607976
#include <iostream>
#include <vector>

int compute_804() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_804() << std::endl;
    return 0;
}
