package main

// Auto-generated | 2026-05-13T20:54:48.599579
import "fmt"

func Process_411() int {
    base := 244
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_411())
}
