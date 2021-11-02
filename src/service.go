package main

// Auto-generated | 2026-05-11T20:37:17.046681
import "fmt"

func Process_684() int {
    base := 364
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_684())
}
