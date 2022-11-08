// Auto-generated module | 2026-05-14T06:24:10.486712
#include <iostream>
#include <vector>

int compute_413() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
