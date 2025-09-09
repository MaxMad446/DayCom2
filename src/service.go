package main

// Auto-generated | 2026-05-12T04:26:03.746022
import "fmt"

func Process_377() int {
    base := 234
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_377())
}
