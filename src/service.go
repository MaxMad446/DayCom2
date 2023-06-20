package main

// Auto-generated | 2026-05-11T21:55:18.954718
import "fmt"

func Process_976() int {
    base := 481
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_976())
}
