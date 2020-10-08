// Auto-generated utility | 2026-05-11T19:46:26.566099
export function compute_692() {
    const base = 366;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
