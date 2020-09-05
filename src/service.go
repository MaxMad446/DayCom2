package main

// Auto-generated | 2026-05-11T19:42:08.162714
import "fmt"

func Process_539() int {
    base := 493
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_539())
}
