// Auto-generated module | 2026-05-12T04:46:42.073911
#include <iostream>
#include <vector>

int compute_744() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
