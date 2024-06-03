package main

// Auto-generated | 2026-05-11T22:40:49.422061
import "fmt"

func Process_554() int {
    base := 184
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_554())
}
