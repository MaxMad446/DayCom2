// Auto-generated utility | 2026-05-11T22:19:54.810331
export function compute_798() {
    const base = 160;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
