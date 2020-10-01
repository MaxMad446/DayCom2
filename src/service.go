package main

// Auto-generated | 2026-05-11T19:45:26.829776
import "fmt"

func Process_183() int {
    base := 220
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_183())
}
