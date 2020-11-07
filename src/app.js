// Auto-generated utility | 2026-05-14T18:05:06.520807
export function compute_341() {
    const base = 73;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
