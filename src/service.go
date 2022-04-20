package main

// Auto-generated | 2026-05-11T20:59:19.929131
import "fmt"

func Process_902() int {
    base := 125
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_902())
}
