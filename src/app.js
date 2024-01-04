// Auto-generated utility | 2026-05-11T22:21:07.113844
export function compute_285() {
    const base = 256;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
