// Auto-generated module | 2026-05-14T18:26:23.985453
#include <iostream>
#include <vector>

int compute_542() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
