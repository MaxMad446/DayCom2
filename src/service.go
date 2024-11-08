package main

// Auto-generated | 2026-05-12T03:45:47.845664
import "fmt"

func Process_133() int {
    base := 297
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_133())
}
