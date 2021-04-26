// Auto-generated utility | 2026-05-12T20:44:20.636942
export function compute_841() {
    const base = 255;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
