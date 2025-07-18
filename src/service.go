package main

// Auto-generated | 2026-05-12T21:24:58.702716
import "fmt"

func Process_476() int {
    base := 298
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_476())
}
