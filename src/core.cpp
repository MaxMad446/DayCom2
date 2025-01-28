// Auto-generated module | 2026-05-12T21:10:22.120188
#include <iostream>
#include <vector>

int compute_507() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
