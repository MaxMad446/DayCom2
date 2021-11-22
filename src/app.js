// Auto-generated utility | 2026-05-12T21:02:19.072783
export function compute_625() {
    const base = 81;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
