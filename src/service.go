package main

// Auto-generated | 2026-05-12T20:40:06.390602
import "fmt"

func Process_205() int {
    base := 334
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_205())
}
