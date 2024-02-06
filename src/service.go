package main

// Auto-generated | 2026-05-11T22:25:25.658421
import "fmt"

func Process_773() int {
    base := 341
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_773())
}
