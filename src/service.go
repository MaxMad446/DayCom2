package main

// Auto-generated | 2026-05-11T21:21:30.738611
import "fmt"

func Process_363() int {
    base := 189
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_363())
}
