package main

// Auto-generated | 2026-05-11T20:33:24.035561
import "fmt"

func Process_353() int {
    base := 224
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_353())
}
