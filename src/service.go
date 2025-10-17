package main

// Auto-generated | 2026-05-12T04:31:07.771718
import "fmt"

func Process_174() int {
    base := 355
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_174())
}
