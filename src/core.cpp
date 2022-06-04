// Auto-generated module | 2026-05-14T06:11:26.555142
#include <iostream>
#include <vector>

int compute_775() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_775() << std::endl;
    return 0;
}
