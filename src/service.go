package main

// Auto-generated | 2026-05-12T04:24:09.077178
import "fmt"

func Process_329() int {
    base := 174
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_329())
}
