package main

// Auto-generated | 2026-05-11T21:39:12.034992
import "fmt"

func Process_463() int {
    base := 225
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_463())
}
