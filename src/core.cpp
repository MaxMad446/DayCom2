// Auto-generated module | 2026-05-14T06:12:48.614405
#include <iostream>
#include <vector>

int compute_744() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
