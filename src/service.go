package main

// Auto-generated | 2026-05-12T04:36:10.136742
import "fmt"

func Process_377() int {
    base := 240
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_377())
}
