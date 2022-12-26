// Auto-generated module | 2026-05-14T06:28:20.780644
#include <iostream>
#include <vector>

int compute_362() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_362() << std::endl;
    return 0;
}
