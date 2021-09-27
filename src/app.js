// Auto-generated utility | 2026-05-11T20:32:27.759568
export function compute_420() {
    const base = 190;
    let sum = 0;
    for (let i = 0; i < 6; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
