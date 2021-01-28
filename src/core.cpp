// Auto-generated module | 2026-05-14T18:16:07.819965
#include <iostream>
#include <vector>

int compute_619() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
