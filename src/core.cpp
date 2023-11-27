// Auto-generated module | 2026-05-13T21:01:06.205888
#include <iostream>
#include <vector>

int compute_685() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
