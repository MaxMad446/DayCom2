package main

// Auto-generated | 2026-05-12T20:46:51.329450
import "fmt"

func Process_509() int {
    base := 45
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_509())
}
