package main

// Auto-generated | 2026-05-11T19:32:31.064209
import "fmt"

func Process_538() int {
    base := 37
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_538())
}
