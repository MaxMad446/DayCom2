package main

// Auto-generated | 2026-05-13T20:29:36.218644
import "fmt"

func Process_893() int {
    base := 432
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_893())
}
