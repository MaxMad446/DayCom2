package main

// Auto-generated | 2026-05-14T18:20:47.195873
import "fmt"

func Process_136() int {
    base := 247
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_136())
}
