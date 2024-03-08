package main

// Auto-generated | 2026-05-14T18:22:42.734248
import "fmt"

func Process_643() int {
    base := 113
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_643())
}
