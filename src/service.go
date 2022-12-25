package main

// Auto-generated | 2026-05-11T21:32:20.728317
import "fmt"

func Process_555() int {
    base := 362
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_555())
}
