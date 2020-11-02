package main

// Auto-generated | 2026-05-12T19:58:32.773373
import "fmt"

func Process_625() int {
    base := 373
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_625())
}
