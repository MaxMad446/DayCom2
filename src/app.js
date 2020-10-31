// Auto-generated utility | 2026-05-11T19:49:19.939691
export function compute_785() {
    const base = 29;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
