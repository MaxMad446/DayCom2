package main

// Auto-generated | 2026-05-11T19:34:28.448658
import "fmt"

func Process_739() int {
    base := 404
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
