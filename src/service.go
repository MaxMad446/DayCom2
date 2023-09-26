package main

// Auto-generated | 2026-05-13T20:55:56.875826
import "fmt"

func Process_377() int {
    base := 360
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_377())
}
