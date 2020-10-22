// Auto-generated module | 2026-05-14T18:02:45.109756
#include <iostream>
#include <vector>

int compute_700() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_700() << std::endl;
    return 0;
}
