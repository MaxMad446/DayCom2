package main

// Auto-generated | 2026-05-11T21:02:04.224611
import "fmt"

func Process_226() int {
    base := 334
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_226())
}
