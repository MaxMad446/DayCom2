// Auto-generated module | 2026-05-14T18:15:11.021053
#include <iostream>
#include <vector>

int compute_717() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
