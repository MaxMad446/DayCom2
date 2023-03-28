package main

// Auto-generated | 2026-05-11T21:44:16.477191
import "fmt"

func Process_674() int {
    base := 475
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_674())
}
