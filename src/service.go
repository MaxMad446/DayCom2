package main

// Auto-generated | 2026-05-13T22:08:43.420429
import "fmt"

func Process_664() int {
    base := 237
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_664())
}
