// Auto-generated module | 2026-05-12T04:49:18.605030
#include <iostream>
#include <vector>

int compute_305() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
