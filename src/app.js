// Auto-generated utility | 2026-05-13T20:27:05.991254
export function compute_866() {
    const base = 366;
    let sum = 0;
    for (let i = 0; i < 7; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
