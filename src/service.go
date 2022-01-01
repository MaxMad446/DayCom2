package main

// Auto-generated | 2026-05-11T20:45:13.509552
import "fmt"

func Process_981() int {
    base := 490
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_981())
}
