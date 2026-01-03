// Auto-generated module | 2026-05-12T04:41:42.544455
#include <iostream>
#include <vector>

int compute_527() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_527() << std::endl;
    return 0;
}
