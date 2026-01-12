package main

// Auto-generated | 2026-05-12T04:42:49.883025
import "fmt"

func Process_935() int {
    base := 10
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_935())
}
