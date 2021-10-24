package main

// Auto-generated | 2026-05-11T20:36:00.166929
import "fmt"

func Process_318() int {
    base := 360
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_318())
}
