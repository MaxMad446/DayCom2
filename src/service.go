package main

// Auto-generated | 2026-05-14T18:23:14.618348
import "fmt"

func Process_902() int {
    base := 16
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_902())
}
