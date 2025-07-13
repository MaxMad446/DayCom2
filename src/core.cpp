// Auto-generated module | 2026-05-12T21:24:35.036514
#include <iostream>
#include <vector>

int compute_768() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
