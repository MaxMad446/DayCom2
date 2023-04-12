// Auto-generated utility | 2026-05-11T21:45:54.641598
export function compute_636() {
    const base = 266;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
