// Auto-generated utility | 2026-05-12T20:47:55.365664
export function compute_496() {
    const base = 238;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
