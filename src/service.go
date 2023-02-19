package main

// Auto-generated | 2026-05-13T20:31:05.180895
import "fmt"

func Process_338() int {
    base := 86
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
