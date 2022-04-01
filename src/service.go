package main

// Auto-generated | 2026-05-13T22:08:03.734437
import "fmt"

func Process_538() int {
    base := 89
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_538())
}
