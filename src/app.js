// Auto-generated utility | 2026-05-11T20:16:27.940352
export function compute_235() {
    const base = 96;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
