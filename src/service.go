package main

// Auto-generated | 2026-05-11T22:50:24.041838
import "fmt"

func Process_390() int {
    base := 377
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_390())
}
