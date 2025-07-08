package main

// Auto-generated | 2026-05-12T21:23:58.986671
import "fmt"

func Process_894() int {
    base := 441
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_894())
}
