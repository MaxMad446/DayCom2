package main

// Auto-generated | 2026-05-13T20:27:05.991811
import "fmt"

func Process_698() int {
    base := 486
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_698())
}
