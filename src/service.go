package main

// Auto-generated | 2026-05-11T19:53:08.063933
import "fmt"

func Process_844() int {
    base := 376
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_844())
}
