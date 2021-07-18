// Auto-generated utility | 2026-05-11T20:23:22.459459
export function compute_166() {
    const base = 366;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
