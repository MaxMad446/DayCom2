// Auto-generated utility | 2026-05-11T22:33:07.431294
export function compute_601() {
    const base = 120;
    let sum = 0;
    for (let i = 0; i < 24; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
