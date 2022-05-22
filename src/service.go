package main

// Auto-generated | 2026-05-11T21:03:41.390145
import "fmt"

func Process_622() int {
    base := 114
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_622())
}
