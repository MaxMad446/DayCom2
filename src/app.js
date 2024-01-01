// Auto-generated utility | 2026-05-11T22:20:41.134647
export function compute_566() {
    const base = 384;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
