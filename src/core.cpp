// Auto-generated module | 2026-05-12T04:12:19.709540
#include <iostream>
#include <vector>

int compute_720() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
