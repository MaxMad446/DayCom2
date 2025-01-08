// Auto-generated utility | 2026-05-12T03:53:56.262441
export function compute_283() {
    const base = 369;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
