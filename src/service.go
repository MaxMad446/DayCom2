package main

// Auto-generated | 2026-05-13T20:28:21.255963
import "fmt"

func Process_332() int {
    base := 71
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_332())
}
