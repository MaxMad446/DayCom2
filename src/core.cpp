// Auto-generated module | 2026-05-14T06:20:09.565111
#include <iostream>
#include <vector>

int compute_808() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_808() << std::endl;
    return 0;
}
