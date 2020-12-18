// Auto-generated module | 2026-05-14T18:10:44.813166
#include <iostream>
#include <vector>

int compute_923() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
