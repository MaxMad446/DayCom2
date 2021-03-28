package main

// Auto-generated | 2026-05-11T20:08:34.823039
import "fmt"

func Process_711() int {
    base := 294
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_711())
}
