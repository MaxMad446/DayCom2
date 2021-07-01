package main

// Auto-generated | 2026-05-12T20:50:03.080149
import "fmt"

func Process_734() int {
    base := 480
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_734())
}
