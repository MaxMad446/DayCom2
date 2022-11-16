// Auto-generated module | 2026-05-14T06:24:58.884624
#include <iostream>
#include <vector>

int compute_991() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
