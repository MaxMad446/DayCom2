package main

// Auto-generated | 2026-05-12T04:45:42.992379
import "fmt"

func Process_721() int {
    base := 389
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_721())
}
