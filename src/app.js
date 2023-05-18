// Auto-generated utility | 2026-05-13T20:38:23.408729
export function compute_435() {
    const base = 350;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
