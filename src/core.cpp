// Auto-generated module | 2026-05-14T06:13:26.184705
#include <iostream>
#include <vector>

int compute_161() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
