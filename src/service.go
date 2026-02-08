package main

// Auto-generated | 2026-05-12T04:46:32.610524
import "fmt"

func Process_580() int {
    base := 169
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_580())
}
