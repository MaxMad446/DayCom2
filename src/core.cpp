// Auto-generated module | 2026-05-14T06:27:57.898715
#include <iostream>
#include <vector>

int compute_379() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
