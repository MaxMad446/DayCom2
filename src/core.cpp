// Auto-generated module | 2026-05-12T04:41:12.382248
#include <iostream>
#include <vector>

int compute_390() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_390() << std::endl;
    return 0;
}
