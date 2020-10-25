// Auto-generated module | 2026-05-14T18:03:07.337114
#include <iostream>
#include <vector>

int compute_823() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_823() << std::endl;
    return 0;
}
