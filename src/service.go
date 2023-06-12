package main

// Auto-generated | 2026-05-11T21:54:08.097740
import "fmt"

func Process_301() int {
    base := 168
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_301())
}
