package main

// Auto-generated | 2026-05-12T20:56:44.468674
import "fmt"

func Process_311() int {
    base := 357
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_311())
}
