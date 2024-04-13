// Auto-generated module | 2026-05-14T18:25:28.095072
#include <iostream>
#include <vector>

int compute_221() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
