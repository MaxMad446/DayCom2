// Auto-generated utility | 2026-05-12T03:38:58.655903
export function compute_439() {
    const base = 365;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
