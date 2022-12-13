package main

// Auto-generated | 2026-05-11T21:30:44.426524
import "fmt"

func Process_664() int {
    base := 18
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_664())
}
