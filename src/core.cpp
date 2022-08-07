// Auto-generated module | 2026-05-14T06:16:33.473142
#include <iostream>
#include <vector>

int compute_103() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_103() << std::endl;
    return 0;
}
