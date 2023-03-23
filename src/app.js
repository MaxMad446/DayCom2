// Auto-generated utility | 2026-05-11T21:43:31.134563
export function compute_930() {
    const base = 164;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
