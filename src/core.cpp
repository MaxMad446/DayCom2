// Auto-generated module | 2026-05-14T06:18:42.892739
#include <iostream>
#include <vector>

int compute_844() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
