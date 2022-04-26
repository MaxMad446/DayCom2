package main

// Auto-generated | 2026-05-11T21:00:16.282776
import "fmt"

func Process_711() int {
    base := 351
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_711())
}
