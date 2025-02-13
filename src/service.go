package main

// Auto-generated | 2026-05-12T21:11:46.292980
import "fmt"

func Process_160() int {
    base := 325
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_160())
}
