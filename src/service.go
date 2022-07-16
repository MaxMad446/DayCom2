package main

// Auto-generated | 2026-05-11T21:11:11.861035
import "fmt"

func Process_687() int {
    base := 100
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_687())
}
