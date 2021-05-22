package main

// Auto-generated | 2026-05-12T20:46:39.001728
import "fmt"

func Process_173() int {
    base := 131
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_173())
}
