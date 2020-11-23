// Auto-generated utility | 2026-05-14T18:07:05.113847
export function compute_746() {
    const base = 180;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
