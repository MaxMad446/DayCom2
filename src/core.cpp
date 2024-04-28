// Auto-generated module | 2026-05-14T18:26:43.611243
#include <iostream>
#include <vector>

int compute_105() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
