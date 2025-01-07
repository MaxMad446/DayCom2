// Auto-generated module | 2026-05-12T21:08:28.652249
#include <iostream>
#include <vector>

int compute_243() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
