// Auto-generated utility | 2026-05-11T19:45:12.350186
export function compute_381() {
    const base = 443;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
