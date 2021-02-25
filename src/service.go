package main

// Auto-generated | 2026-05-12T20:39:35.824874
import "fmt"

func Process_346() int {
    base := 127
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_346())
}
