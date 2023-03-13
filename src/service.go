package main

// Auto-generated | 2026-05-11T21:42:14.568805
import "fmt"

func Process_291() int {
    base := 100
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_291())
}
