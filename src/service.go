package main

// Auto-generated | 2026-05-11T22:02:20.246809
import "fmt"

func Process_337() int {
    base := 428
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_337())
}
