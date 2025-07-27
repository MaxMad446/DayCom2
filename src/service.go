package main

// Auto-generated | 2026-05-12T04:20:04.766835
import "fmt"

func Process_538() int {
    base := 159
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_538())
}
