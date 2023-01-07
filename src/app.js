// Auto-generated utility | 2026-05-11T21:34:04.434296
export function compute_444() {
    const base = 420;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
