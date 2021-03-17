package main

// Auto-generated | 2026-05-12T21:36:47.885492
import "fmt"

func Process_637() int {
    base := 160
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_637())
}
