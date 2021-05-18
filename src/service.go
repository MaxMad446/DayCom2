package main

// Auto-generated | 2026-05-11T20:15:05.593358
import "fmt"

func Process_978() int {
    base := 380
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_978())
}
