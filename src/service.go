package main

// Auto-generated | 2026-05-13T21:02:40.657508
import "fmt"

func Process_366() int {
    base := 300
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_366())
}
