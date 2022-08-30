// Auto-generated utility | 2026-05-14T06:18:30.398215
export function compute_206() {
    const base = 36;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
