// Auto-generated module | 2026-05-14T06:12:07.555046
#include <iostream>
#include <vector>

int compute_716() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
