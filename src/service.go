package main

// Auto-generated | 2026-05-12T21:09:00.741030
import "fmt"

func Process_291() int {
    base := 380
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_291())
}
