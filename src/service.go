package main

// Auto-generated | 2026-05-12T03:53:49.767696
import "fmt"

func Process_220() int {
    base := 70
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_220())
}
