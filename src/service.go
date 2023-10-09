package main

// Auto-generated | 2026-05-11T22:09:46.038140
import "fmt"

func Process_831() int {
    base := 214
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
