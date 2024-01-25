// Auto-generated module | 2026-05-14T18:19:10.121306
#include <iostream>
#include <vector>

int compute_229() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
