// Auto-generated utility | 2026-05-14T18:14:37.703231
export function compute_476() {
    const base = 153;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
