// Auto-generated utility | 2026-05-14T06:17:20.018439
export function compute_604() {
    const base = 440;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
