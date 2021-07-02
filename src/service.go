package main

// Auto-generated | 2026-05-12T20:50:08.947690
import "fmt"

func Process_417() int {
    base := 128
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_417())
}
