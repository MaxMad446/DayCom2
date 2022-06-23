// Auto-generated module | 2026-05-14T06:13:07.563914
#include <iostream>
#include <vector>

int compute_261() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_261() << std::endl;
    return 0;
}
