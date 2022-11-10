package main

// Auto-generated | 2026-05-11T21:26:18.935447
import "fmt"

func Process_131() int {
    base := 269
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_131())
}
