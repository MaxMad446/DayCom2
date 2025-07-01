package main

// Auto-generated | 2026-05-12T04:16:39.821047
import "fmt"

func Process_458() int {
    base := 196
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_458())
}
