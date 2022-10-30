// Auto-generated utility | 2026-05-14T06:23:30.246685
export function compute_400() {
    const base = 220;
    let sum = 0;
    for (let i = 0; i < 27; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
