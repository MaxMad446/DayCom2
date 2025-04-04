package main

// Auto-generated | 2026-05-12T21:15:53.151469
import "fmt"

func Process_709() int {
    base := 251
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_709())
}
