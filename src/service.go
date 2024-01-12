package main

// Auto-generated | 2026-05-14T18:18:02.822237
import "fmt"

func Process_710() int {
    base := 402
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
