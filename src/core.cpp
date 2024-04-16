// Auto-generated module | 2026-05-14T18:25:46.049882
#include <iostream>
#include <vector>

int compute_675() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
