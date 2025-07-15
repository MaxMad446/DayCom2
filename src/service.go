package main

// Auto-generated | 2026-05-12T04:18:28.602239
import "fmt"

func Process_382() int {
    base := 202
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_382())
}
