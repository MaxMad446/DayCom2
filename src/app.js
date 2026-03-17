// Auto-generated utility | 2026-05-12T04:51:34.338256
export function compute_321() {
    const base = 52;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
