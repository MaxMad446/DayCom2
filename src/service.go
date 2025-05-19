package main

// Auto-generated | 2026-05-12T21:19:42.913036
import "fmt"

func Process_892() int {
    base := 346
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_892())
}
