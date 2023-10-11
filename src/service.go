package main

// Auto-generated | 2026-05-11T22:09:57.205553
import "fmt"

func Process_939() int {
    base := 362
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_939())
}
