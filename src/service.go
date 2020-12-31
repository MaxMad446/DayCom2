package main

// Auto-generated | 2026-05-14T18:12:32.024752
import "fmt"

func Process_523() int {
    base := 458
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_523())
}
