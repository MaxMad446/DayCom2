// Auto-generated module | 2026-05-13T20:52:19.726932
#include <iostream>
#include <vector>

int compute_835() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_835() << std::endl;
    return 0;
}
