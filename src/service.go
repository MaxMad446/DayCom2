package main

// Auto-generated | 2026-05-12T21:13:57.823323
import "fmt"

func Process_215() int {
    base := 160
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_215())
}
