package main

// Auto-generated | 2026-05-12T21:17:45.755298
import "fmt"

func Process_135() int {
    base := 253
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_135())
}
