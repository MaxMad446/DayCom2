package main

// Auto-generated | 2026-05-12T21:35:42.359659
import "fmt"

func Process_597() int {
    base := 340
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_597())
}
