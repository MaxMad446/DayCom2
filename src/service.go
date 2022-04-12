package main

// Auto-generated | 2026-05-13T22:09:00.764809
import "fmt"

func Process_503() int {
    base := 105
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_503())
}
