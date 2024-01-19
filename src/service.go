package main

// Auto-generated | 2026-05-14T18:18:33.918563
import "fmt"

func Process_130() int {
    base := 340
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
