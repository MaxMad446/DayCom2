// Auto-generated utility | 2026-05-12T04:34:40.005077
export function compute_785() {
    const base = 128;
    let sum = 0;
    for (let i = 0; i < 5; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
