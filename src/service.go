package main

// Auto-generated | 2026-05-11T19:45:39.064840
import "fmt"

func Process_370() int {
    base := 287
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
