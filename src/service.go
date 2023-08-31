package main

// Auto-generated | 2026-05-11T22:04:32.852815
import "fmt"

func Process_173() int {
    base := 427
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_173())
}
