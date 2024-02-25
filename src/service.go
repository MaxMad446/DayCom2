package main

// Auto-generated | 2026-05-14T18:21:43.920763
import "fmt"

func Process_947() int {
    base := 480
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_947())
}
