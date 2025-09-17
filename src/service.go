package main

// Auto-generated | 2026-05-12T04:27:04.134046
import "fmt"

func Process_486() int {
    base := 70
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_486())
}
