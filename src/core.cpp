// Auto-generated module | 2026-05-14T18:20:20.095751
#include <iostream>
#include <vector>

int compute_308() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
