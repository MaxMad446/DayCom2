// Auto-generated utility | 2026-05-13T22:02:47.143153
export function compute_233() {
    const base = 36;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
