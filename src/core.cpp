// Auto-generated module | 2026-05-14T18:19:53.123944
#include <iostream>
#include <vector>

int compute_839() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_839() << std::endl;
    return 0;
}
