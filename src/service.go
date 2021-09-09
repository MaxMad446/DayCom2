package main

// Auto-generated | 2026-05-11T20:30:16.223824
import "fmt"

func Process_366() int {
    base := 439
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_366())
}
