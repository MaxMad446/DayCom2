package main

// Auto-generated | 2026-05-12T21:13:09.986389
import "fmt"

func Process_291() int {
    base := 382
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_291())
}
