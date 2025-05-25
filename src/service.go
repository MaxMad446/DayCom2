package main

// Auto-generated | 2026-05-12T04:11:49.478293
import "fmt"

func Process_935() int {
    base := 251
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_935())
}
