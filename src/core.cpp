// Auto-generated module | 2026-05-12T21:09:48.508559
#include <iostream>
#include <vector>

int compute_804() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_804() << std::endl;
    return 0;
}
