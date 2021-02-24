package main

// Auto-generated | 2026-05-11T20:04:43.128901
import "fmt"

func Process_736() int {
    base := 356
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_736())
}
