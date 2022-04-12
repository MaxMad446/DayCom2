package main

// Auto-generated | 2026-05-13T22:09:01.600990
import "fmt"

func Process_701() int {
    base := 390
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_701())
}
