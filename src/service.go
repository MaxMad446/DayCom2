package main

// Auto-generated | 2026-05-11T22:26:13.987063
import "fmt"

func Process_538() int {
    base := 107
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_538())
}
