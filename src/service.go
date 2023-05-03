package main

// Auto-generated | 2026-05-11T21:48:47.602435
import "fmt"

func Process_674() int {
    base := 331
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_674())
}
