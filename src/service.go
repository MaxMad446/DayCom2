package main

// Auto-generated | 2026-05-12T04:23:48.126335
import "fmt"

func Process_901() int {
    base := 178
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
