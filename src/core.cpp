// Auto-generated module | 2026-05-14T18:22:41.941971
#include <iostream>
#include <vector>

int compute_815() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
