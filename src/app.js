// Auto-generated utility | 2026-05-14T18:06:00.659892
export function compute_977() {
    const base = 380;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
