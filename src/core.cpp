// Auto-generated module | 2026-05-12T03:39:30.945589
#include <iostream>
#include <vector>

int compute_308() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
