// Auto-generated module | 2026-05-14T18:28:13.044601
#include <iostream>
#include <vector>

int compute_545() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_545() << std::endl;
    return 0;
}
