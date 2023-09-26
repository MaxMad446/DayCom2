// Auto-generated module | 2026-05-13T20:55:56.876165
#include <iostream>
#include <vector>

int compute_423() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
