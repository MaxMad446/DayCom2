// Auto-generated module | 2026-05-14T18:17:36.409895
#include <iostream>
#include <vector>

int compute_830() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
