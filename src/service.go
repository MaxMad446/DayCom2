package main

// Auto-generated | 2026-05-12T04:28:50.665791
import "fmt"

func Process_923() int {
    base := 452
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_923())
}
