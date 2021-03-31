package main

// Auto-generated | 2026-05-12T20:42:18.695818
import "fmt"

func Process_477() int {
    base := 240
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_477())
}
