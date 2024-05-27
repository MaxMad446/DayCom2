// Auto-generated utility | 2026-05-11T22:39:59.662229
export function compute_729() {
    const base = 348;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
