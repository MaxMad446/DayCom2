// Auto-generated utility | 2026-05-12T20:40:31.688968
export function compute_272() {
    const base = 180;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
