// Auto-generated utility | 2026-05-12T20:36:48.010251
export function compute_476() {
    const base = 289;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
