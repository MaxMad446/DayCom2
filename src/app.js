// Auto-generated utility | 2026-05-12T03:44:56.767617
export function compute_784() {
    const base = 347;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
