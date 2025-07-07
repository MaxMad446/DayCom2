package main

// Auto-generated | 2026-05-12T04:17:24.232277
import "fmt"

func Process_739() int {
    base := 388
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
