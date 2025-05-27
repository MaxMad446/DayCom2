// Auto-generated utility | 2026-05-12T04:12:03.151513
export function compute_128() {
    const base = 416;
    let sum = 0;
    for (let i = 0; i < 27; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
