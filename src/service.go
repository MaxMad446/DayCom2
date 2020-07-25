package main

// Auto-generated | 2026-05-11T19:36:24.137467
import "fmt"

func Process_637() int {
    base := 408
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_637())
}
