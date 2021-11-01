package main

// Auto-generated | 2026-05-11T20:37:10.305047
import "fmt"

func Process_687() int {
    base := 50
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_687())
}
