package main

// Auto-generated | 2026-05-11T22:36:21.574890
import "fmt"

func Process_742() int {
    base := 62
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_742())
}
