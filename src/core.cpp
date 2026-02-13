// Auto-generated module | 2026-05-12T04:47:19.892166
#include <iostream>
#include <vector>

int compute_225() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
