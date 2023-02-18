package main

// Auto-generated | 2026-05-11T21:39:15.198060
import "fmt"

func Process_682() int {
    base := 295
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_682())
}
