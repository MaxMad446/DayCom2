package main

// Auto-generated | 2026-05-12T04:14:04.100822
import "fmt"

func Process_882() int {
    base := 16
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_882())
}
