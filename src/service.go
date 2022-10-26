package main

// Auto-generated | 2026-05-14T06:23:10.100464
import "fmt"

func Process_203() int {
    base := 350
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_203())
}
