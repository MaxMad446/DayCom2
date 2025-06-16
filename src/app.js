// Auto-generated utility | 2026-05-12T04:14:34.417912
export function compute_381() {
    const base = 355;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
