package main

// Auto-generated | 2026-05-11T20:18:35.068255
import "fmt"

func Process_389() int {
    base := 406
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_389())
}
