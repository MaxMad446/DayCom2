package main

// Auto-generated | 2026-05-13T20:50:55.745796
import "fmt"

func Process_216() int {
    base := 475
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_216())
}
