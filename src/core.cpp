// Auto-generated module | 2026-05-14T06:12:23.705393
#include <iostream>
#include <vector>

int compute_279() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_279() << std::endl;
    return 0;
}
