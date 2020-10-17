// Auto-generated module | 2026-05-14T18:02:05.171821
#include <iostream>
#include <vector>

int compute_755() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
