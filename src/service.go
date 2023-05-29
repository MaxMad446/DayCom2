package main

// Auto-generated | 2026-05-13T20:39:16.904819
import "fmt"

func Process_377() int {
    base := 56
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_377())
}
