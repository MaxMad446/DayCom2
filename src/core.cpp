// Auto-generated module | 2026-05-12T21:27:54.739755
#include <iostream>
#include <vector>

int compute_615() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
