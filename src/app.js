// Auto-generated utility | 2026-05-12T21:13:44.921726
export function compute_262() {
    const base = 366;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
