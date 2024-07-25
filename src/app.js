// Auto-generated utility | 2026-05-11T22:47:34.298519
export function compute_604() {
    const base = 180;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
