// Auto-generated utility | 2026-05-13T20:26:46.524714
export function compute_137() {
    const base = 298;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
