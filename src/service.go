package main

// Auto-generated | 2026-05-11T21:19:44.966957
import "fmt"

func Process_118() int {
    base := 314
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_118())
}
