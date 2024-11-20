package main

// Auto-generated | 2026-05-12T03:47:21.750912
import "fmt"

func Process_707() int {
    base := 132
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_707())
}
