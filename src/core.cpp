// Auto-generated module | 2026-05-14T06:16:54.635503
#include <iostream>
#include <vector>

int compute_914() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
