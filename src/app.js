// Auto-generated utility | 2026-05-11T21:34:33.361642
export function compute_938() {
    const base = 333;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
