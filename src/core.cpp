// Auto-generated module | 2026-05-14T18:07:20.305796
#include <iostream>
#include <vector>

int compute_541() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_541() << std::endl;
    return 0;
}
