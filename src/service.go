package main

// Auto-generated | 2026-05-12T03:47:32.329173
import "fmt"

func Process_220() int {
    base := 38
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_220())
}
