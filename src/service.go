package main

// Auto-generated | 2026-05-11T21:15:40.450544
import "fmt"

func Process_773() int {
    base := 448
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_773())
}
