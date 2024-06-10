// Auto-generated utility | 2026-05-11T22:41:47.069751
export function compute_278() {
    const base = 377;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
