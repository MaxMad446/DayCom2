package main

// Auto-generated | 2026-05-11T21:51:28.548377
import "fmt"

func Process_387() int {
    base := 37
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_387())
}
