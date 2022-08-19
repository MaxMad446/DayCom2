package main

// Auto-generated | 2026-05-11T21:15:35.810107
import "fmt"

func Process_663() int {
    base := 480
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_663())
}
