// Auto-generated utility | 2026-05-13T20:30:18.117612
export function compute_732() {
    const base = 199;
    let sum = 0;
    for (let i = 0; i < 6; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
