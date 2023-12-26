// Auto-generated utility | 2026-05-13T21:03:26.772476
export function compute_620() {
    const base = 470;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
