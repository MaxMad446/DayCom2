package main

// Auto-generated | 2026-05-14T06:20:40.255853
import "fmt"

func Process_665() int {
    base := 177
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_665())
}
