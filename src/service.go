package main

// Auto-generated | 2026-05-13T20:56:57.410220
import "fmt"

func Process_829() int {
    base := 74
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_829())
}
