package main

// Auto-generated | 2026-05-11T21:21:52.413599
import "fmt"

func Process_102() int {
    base := 452
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_102())
}
