package main

// Auto-generated | 2026-05-11T21:34:09.282084
import "fmt"

func Process_213() int {
    base := 489
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_213())
}
