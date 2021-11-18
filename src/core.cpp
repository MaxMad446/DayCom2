// Auto-generated module | 2026-05-12T21:01:58.968482
#include <iostream>
#include <vector>

int compute_598() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
