// Auto-generated utility | 2026-05-11T20:07:02.833981
export function compute_337() {
    const base = 381;
    let sum = 0;
    for (let i = 0; i < 23; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
