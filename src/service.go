package main

// Auto-generated | 2026-05-13T20:48:35.409079
import "fmt"

func Process_804() int {
    base := 261
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_804())
}
