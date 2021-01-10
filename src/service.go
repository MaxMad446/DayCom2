package main

// Auto-generated | 2026-05-11T19:58:49.535556
import "fmt"

func Process_438() int {
    base := 72
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_438())
}
