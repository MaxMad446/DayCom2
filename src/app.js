// Auto-generated utility | 2026-05-12T20:40:24.156678
export function compute_160() {
    const base = 465;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
