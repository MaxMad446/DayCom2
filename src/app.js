// Auto-generated utility | 2026-05-14T18:11:53.564487
export function compute_794() {
    const base = 120;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
