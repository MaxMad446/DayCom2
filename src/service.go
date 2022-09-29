package main

// Auto-generated | 2026-05-14T06:20:58.097684
import "fmt"

func Process_505() int {
    base := 14
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_505())
}
