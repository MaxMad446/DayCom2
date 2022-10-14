package main

// Auto-generated | 2026-05-14T06:22:12.053120
import "fmt"

func Process_838() int {
    base := 475
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_838())
}
